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

void Sample::PrintData() {
	std::cout << "\n\nvar: "<< variant_num <<"\n x_0: " << x_0 << "\n x_end: " << x_end << "\n h: "  << h << "\n u_0: " << u_0;
	std::cout << "n = " << results->Count << "b - xn = 0";
	
	double max_u = results[0]->curr_h;
	int index = 0;

	double min_u = results[0]->curr_h;
	int index_min_u = 0;

	double max_olp = results[0]->local_error_rate;
	int index_olp = 0;

	int count_mul=0;
	int count_div=0;
	for (int i = 0; i < results->Count; i++)
	{
		if (results[i]->curr_h > max_u)
		{
			max_u = results[i]->curr_h;
			index = i;
		}
		if (results[i]->curr_h < min_u) {
			min_u = results[i]->curr_h;
			index_min_u = i;
		}
		if (results[i]->local_error_rate > max_olp) {
			max_olp = results[i]->local_error_rate;
			index_olp = i;
		}
		if (results[i]->counter_div != 0) {
			count_div += results[i]->counter_div;
		}
		if (results[i]->counter_mul != 0) {
			count_mul += results[i]->counter_mul;
		}
	}
	std::cout << "\nmax OLP = " << max_olp <<" index = " << index_olp<< 
		"\nmaxh = " << max_u << " index = "<< index 
		<< "\nmin h = " << min_u << " index = " << index_min_u 
		<<"\ncount mul = " << count_mul<<"\ncount div = "<< count_div;
}

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
	StepResult^ row_first = gcnew StepResult();
	row_first->iter = 0;
	row_first->x = x_0;
	row_first->u_approximate = u_0;
	row_first->u_2_approximate = u_0;
	row_first->diff_u2_u_approximate = 0;
	row_first->local_error_rate = 0;
	row_first->curr_h = h;
	row_first->counter_div = 0;
	row_first->counter_mul = 0;
	row_first->u_true = u_0;
	row_first->global_error_rate = 0;

	results->Add(row_first);
	//results->Add({0 ,x_0 ,u_0 , u_0, 0 ,0 , h, 0, 0, u_0, 0});

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
		StepResult^ row = gcnew StepResult();

		curr_h = next_h;
		if (curr_h < 1e-12) {
			std::cout << "Step too small\n";
			break;
		}

		row->iter = iter_counter + 1;
		row->curr_h = curr_h;

		//WARING: sample not using x 
		k1 = lyambda * u_curr;
		k2 = lyambda * (u_curr + curr_h / 2 * k1);
		k3 = lyambda * (u_curr + curr_h / 2 * k2);
		k4 = lyambda * (u_curr + curr_h * k3);		


		row->u_approximate = u_curr + curr_h / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
		row->x = x_curr + curr_h;

		row->u_true = u_0 * exp(lyambda * (row->x - x_0));

		row->global_error_rate = std::fabs(row->u_approximate - u_0 * exp(lyambda * (row->x - x_0)));

		double f1 = count_next_u(u_curr, curr_h / 2, lyambda);
		row->u_2_approximate = count_next_u(f1, curr_h / 2, lyambda);
		row->diff_u2_u_approximate = std::fabs(row->u_2_approximate - row->u_approximate);
		row->local_error_rate = std::fabs(row->diff_u2_u_approximate / 15.0);

		bool IsPositive = true;
		if (IsDinamicStep) {
			if (epsilon / 32.0 <= row->local_error_rate && row->local_error_rate <= epsilon) {
				next_h = curr_h;
				std::cout << "\n\ngood, make print";
			}
			else if (row->local_error_rate < epsilon / 32.0) {
				next_h *= 2;
				mul_counter = 1;
				std::cout << "\n\nnext h*=2 cool, make print";
			}
			else {
				std::cout << "\nvery bad.Restart step\n";
				next_h /= 2.0;
				div_counter = 1;
				IsPositive = false;
				continue;
			}
		}
		row->counter_mul = mul_counter;
		row->counter_div = div_counter;
		if (IsPositive) {

			u_curr = row->u_approximate;
			x_curr = row->x;
		}
		//checks out_of ranges
		next_h = std::min(x_end - row->x, next_h);

	/*	std::cout << "\niter: " << iter_counter <<
			"\n h_iter: " << next_h <<
			"\n k: " << k1 << " " << k2 << " " << k3 << " " << k4 <<
			"\n u_next: " << row->u_approximate <<
			"\n x_next: " << row->x <<
			"\n global_error: " << row->global_error_rate <<
			"\n local_error: " << row->local_error_rate;*/
		div_counter = 0;
		mul_counter = 0;
		results->Add(row);
		iter_counter++;
	}
	std::cout << "\nexit";
	
}
