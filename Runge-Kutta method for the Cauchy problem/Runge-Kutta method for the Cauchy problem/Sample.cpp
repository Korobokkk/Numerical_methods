#include "pch.h"
#include "Sample.h"

#include <iostream>
#include <vector>
#include <cmath>

void Sample::CreateSampleData(int var, double x_0, double x_end, double h, double u_0, double epsilon) {
	this->variant_num = var;
	this->x_0 = x_0;
	this->x_end = x_end;
	this->h = h;
	this->u_0 = u_0;
	this->epsilon = epsilon;
	return;
};
void Sample::PrintSampleData() {
	std::cout << "var: "<< variant_num <<"\n x_0: " << x_0 << "\n x_end: " << x_end << "\n h: "  << h << "\n u_0: " << u_0;
}

void Sample::GlobalErrorRate() {

}
void Sample::LocalErrorRate() {

}
void OutlineTmpData(const std::vector<double>& k, double lyambda, double next_n, int iter_index, const std::vector<double>& global, const std::vector<double>& local) {
	std::cout << iter_index << ":\nk_i: ";
	for (double k_i : k) {
		std::cout << k_i << " ";
	}
	std::cout << "\nlyambda: " << lyambda << "\nnext_n: " << next_n << "\nGlobalErrorRate: " << global[iter_index + 1];
}

const void Sample::MethodRungeKutta() {
	// dy / dx= (-1)**var_num * var_num / 2 * u 
	// WARING: sample not using x 
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
		//WARING: sample not using x 
		k1 = lyambda * u[iter_counter];
		k2 = lyambda * u[iter_counter] + curr_h / 2 * k1;
		k3 = lyambda * u[iter_counter] + curr_h / 2 * k2;
		k4 = lyambda * u[iter_counter] + curr_h * k3;

		u.push_back(u.back() + curr_h / 6 * (k1 + 2 * k2 + 2 * k3 + k4));
		x.push_back(x.back() + curr_h);

		global_error_rate.push_back(u[iter_counter+1] -
									u_0 * exp(lyambda * (x[iter_counter+1] - x_0)));

		std::cout << "\niter: " << iter_counter <<
			"\n h_iter: " << curr_h <<
			"\n k: " << k1 << " " << k2 << " " << k3 << " " << k4 <<
			"\n u_next: " << u[iter_counter+1]<<
			"\n x_next: " << x[iter_counter+1]<<
			"\n global_error: " << global_error_rate[iter_counter +1];
		


		
		iter_counter++;
	}
	std::cout << "\nexit";

	/*int count_iteration = (x_end - x_0) / h;

	double lyambda = pow(-1, variant_num) * variant_num / 2;
	std::vector<double> global_error_rate(count_iteration, 0.0);
	std::vector<double> local_error_rate(count_iteration, 0.0);

	std::vector<double> u(count_iteration);
	std::vector<double> k(4);
	u[0] = u_0;*/

	//for (int i = 0; i < count_iteration; i++) { //u_0 skipped
	//	double h_n = h;
	//	//WARING: sample not using x 
	//	k[0] = lyambda * u[i];
	//	k[1] = lyambda * (u[i] + h_n / 2 * k[0]);
	//	k[2] = lyambda * (u[i] + h_n / 2 * k[1]);
	//	k[3] = lyambda * (u[i] + h_n * k[2]);

	//	//WARING: sample not using x 
	//	u[i+1] = u[i] + h_n / 6 * (k[0] + 2 * k[1] + 2 * k[2] + k[3]);

	//	//GlobalErrorRate
	//	double x_n = x_0 + h * (i + 1);
	//	global_error_rate[i + 1] = u_0 * exp(lyambda*(x_n -x_0));
	//	//LocalErrorRate


	//	//consolelog
	//	OutlineTmpData(k, lyambda, u[i + 1], i, global_error_rate, local_error_rate);

	//}
	
}
