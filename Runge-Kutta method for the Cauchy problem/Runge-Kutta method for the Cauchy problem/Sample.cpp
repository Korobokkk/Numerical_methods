#include "pch.h"
#include "Sample.h"

#include <iostream>
#include <vector>

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

void Sample::MethodRungeKutta() {
	// dy / dx= (-1)**var_num * var_num / 2 * u 
	// WARING: sample not using x 
	double lyambda = pow(-1, variant_num) * variant_num / 2;
	std::vector<double> u(4);
	std::vector<double> k(4);
	u[0] = u_0;

	for (int i = 0; i < 3; i++) { //u_0 skipped
		double h_n = h;
		//WARING: sample not using x 
		k[0] = lyambda * u[i];
		k[1] = lyambda * (u[i] + h_n / 2 * k[0]);
		k[2] = lyambda * (u[i] + h_n / 2 * k[1]);
		k[3] = lyambda * (u[i] + h_n * k[2]);

		//WARING: sample not using x 
		u[i+1] = u[i] + h_n / 6 * (k[0] + 2 * k[1] + 2 * k[2] + k[3]);

		//GlobalErrorRate
		std::vector<double> global_error_rate(4, 0.0);
		global_error_rate[i+1] = u[i + 1] - u_0 + h * (i + 1);
	}
	
}
