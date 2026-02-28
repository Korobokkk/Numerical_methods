#include "pch.h"
#include "Sample.h"

#include <iostream>
#include <vector>
#include <cmath>

void Sample::CreateSampleData(int var, double x_0, double x_end, double h, double u_0, double epsilon, bool IsDinamicStep) {
	this->variant_num = var;
	this->x_0 = x_0;
	this->x_end = x_end;
	this->h = h;
	this->u_0 = u_0;
	this->epsilon = epsilon;
	this->IsDinamicStep = IsDinamicStep;
	return;
};
void Sample::PrintSampleData() {
	std::cout << "var: "<< variant_num <<"\n x_0: " << x_0 << "\n x_end: " << x_end << "\n h: "  << h << "\n u_0: " << u_0;
}

void Sample::GlobalErrorRate() {

}
void Sample::LocalErrorRate() {

}
//void OutlineTmpData(const std::vector<double>& k, double lyambda, double next_n, int iter_index, const std::vector<double>& global, const std::vector<double>& local) {
//	std::cout << iter_index << ":\nk_i: ";
//	for (double k_i : k) {
//		std::cout << k_i << " ";
//	}
//	std::cout << "\nlyambda: " << lyambda << "\nnext_n: " << next_n << "\nGlobalErrorRate: " << global[iter_index + 1];
//}

const double count_next_u(double u, double h, double lyambda) {
	double k1, k2, k3, k4;
	k1 = lyambda * u;
	k2 = lyambda * (u + h / 2 * k1);
	k3 = lyambda * (u + h / 2 * k2);
	k4 = lyambda * (u + h * k3);
	return u + h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
}

void Sample::MethodRungeKutta() {
	// dy / dx= (-1)**var_num * var_num / 2 * u 
	// WARING: sample not using x 
	results->Add({0 ,x_0 ,u_0 , u_0 ,0 , h, 0, 0, u_0, 0});
	/*
	StepResult row = { iter_counter, x_value, u_big, u_half,
                   local_error, curr_h,
                   counter_div, counter_mul,
                   u_true, global_error };

	*/ //for save
	
	StepResult row;

	double u_curr = u_0;
	double x_curr = x_0;
	double lyambda = pow(-1, variant_num) * variant_num / 2;
	double k1, k2, k3, k4;
	double curr_h = h;
	double next_h = h;

	double div_counter = 0;
	double mul_counter = 0;
	int iter_counter = 0;
	while (x_curr < x_end) {
		curr_h = next_h;
		if (curr_h < 1e-12) {
			std::cout << "Step too small\n";
			break;
		}
		//WARING: sample not using x 
		k1 = lyambda * u_curr;
		k2 = lyambda * (u_curr + curr_h / 2 * k1);
		k3 = lyambda * (u_curr + curr_h / 2 * k2);
		k4 = lyambda * (u_curr + curr_h * k3);		

		double u_next = u_curr + curr_h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
		double x_next = x_curr + curr_h;

		double next_global_error = u_next - u_0 * exp(lyambda * (x_next - x_0));

		double f1 = count_next_u(u_curr, curr_h / 2, lyambda);
		double f2 = count_next_u(f1, curr_h / 2, lyambda);

		double next_local_error(std::fabs(f2 - u_next));
		
		double S = std::fabs(next_local_error / 15.0);
		
		bool IsPositive = true;
		if (IsDinamicStep) {
			if (epsilon / 32.0 <= S && S <= epsilon) {
				next_h = curr_h;
				std::cout << "\n\ngood, make print";
			}
			else if (S < epsilon / 32.0) {
				next_h *= 2;
				mul_counter += 1;
				std::cout << "\n\nnext h*=2 cool, make print";
			}
			else {
				std::cout << "\nvery bad.Restart step\n";
				next_h /= 2.0;
				div_counter += 1;
				IsPositive = false;
				continue;
			}
		}
		if (IsPositive) {

			u_curr = u_next;
			x_curr = x_next;
		}
		//checks out_of ranges
		next_h = std::min(x_end - x_next, next_h);

		std::cout << "\niter: " << iter_counter <<
			"\n h_iter: " << next_h <<
			"\n k: " << k1 << " " << k2 << " " << k3 << " " << k4 <<
			"\n u_next: " << u_next <<
			"\n x_next: " << x_next <<
			"\n global_error: " << next_global_error <<
			"\n local_error: " << next_local_error;
		
		iter_counter++;
	}
	std::cout << "\nexit";
	
}
