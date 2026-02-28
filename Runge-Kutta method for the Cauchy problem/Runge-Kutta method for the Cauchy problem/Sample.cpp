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

	*/

	std::vector<double> u = {this->u_0};
	std::vector<double> x = {this->x_0};
	std::vector<double> global_error_rate(1, 0.0);
	std::vector<double> local_error_rate(1, 0.0);
	double lyambda = pow(-1, variant_num) * variant_num / 2;
	double k1, k2, k3, k4;
	double curr_h = h;

	//double x_curr = x_0;
	int iter_counter = 0;
	while (x[iter_counter] < x_end) {
		if (curr_h < 1e-12) {
			std::cout << "Step too small\n";
			break;
		}
		//WARING: sample not using x 
		k1 = lyambda * u[iter_counter];
		k2 = lyambda * (u[iter_counter] + curr_h / 2 * k1);
		k3 = lyambda * (u[iter_counter] + curr_h / 2 * k2);
		k4 = lyambda * (u[iter_counter] + curr_h * k3);

		u.push_back(u.back() + curr_h / 6 * (k1 + 2 * k2 + 2 * k3 + k4));
		x.push_back(x.back() + curr_h);

		global_error_rate.push_back(u[iter_counter + 1] -
									u_0 * exp(lyambda * (x[iter_counter+1] - x_0)));

		double f1 = count_next_u(u[iter_counter], curr_h / 2, lyambda);
		double f2 = count_next_u(f1, curr_h / 2, lyambda);
		local_error_rate.push_back(f2 - u[iter_counter + 1]);
		double S = std::fabs(local_error_rate.back() / 15.0);

		if (IsDinamicStep) {
			if (epsilon / 32.0 <= S && S <= epsilon) {
				std::cout << "\n\ngood, make print";
			}
			else if (S < epsilon / 32.0) {
				curr_h *= 2;
				std::cout << "\n\nnext h*=2 cool, make print";
			}
			else {
				std::cout << "very bad. Restart step";
				curr_h /= 2.0;
				u.pop_back();
				x.pop_back();
				global_error_rate.pop_back();
				local_error_rate.pop_back();
				continue;
			}
		}

		//checks out_of ranges
		curr_h = std::min(x_end - x.back(), curr_h);

		std::cout << "\niter: " << iter_counter <<
			"\n h_iter: " << curr_h <<
			"\n k: " << k1 << " " << k2 << " " << k3 << " " << k4 <<
			"\n u_next: " << u[iter_counter + 1] <<
			"\n x_next: " << x[iter_counter + 1] <<
			"\n global_error: " << global_error_rate[iter_counter + 1] <<
			"\n local_error: " << local_error_rate[iter_counter + 1];
		
		iter_counter++;
	}
	std::cout << "\nexit";
	
}
