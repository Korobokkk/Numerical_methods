#include "pch.h"
#include "MainTask.h"
#include <cmath>
#include <iostream>
#include <utility>

double f1(double y2) {
	return y2;
}
double MainTask::f2(double y1, double y2) {
	return -c / m * y2 - k / m * y1 - k_second / m * y1*y1*y1;
}

void MainTask::PrintData() {
	//std::cout << "\n\nvar: " << variant_num << "\n x_0: " << x_0 << "\n x_end: " << x_end << "\n h: " << h << "\n u_0: " << u_0;
	std::cout << "n = " << MainResults->Count << "b - xn = 0";

	double max_u = MainResults[0]->curr_h;
	int index = 0;

	double min_u = MainResults[0]->curr_h;
	int index_min_u = 0;

	double max_olp = MainResults[0]->local_error_rate;
	int index_olp = 0;

	int count_mul = 0;
	int count_div = 0;
	for (int i = 0; i < MainResults->Count; i++)
	{
		if (MainResults[i]->curr_h > max_u)
		{
			max_u = MainResults[i]->curr_h;
			index = i;
		}
		if (MainResults[i]->curr_h < min_u) {
			min_u = MainResults[i]->curr_h;
			index_min_u = i;
		}
		if (MainResults[i]->local_error_rate > max_olp) {
			max_olp = MainResults[i]->local_error_rate;
			index_olp = i;
		}
		if (MainResults[i]->counter_div != 0) {
			count_div += MainResults[i]->counter_div;
		}
		if (MainResults[i]->counter_mul != 0) {
			count_mul += MainResults[i]->counter_mul;
		}
	}
	std::cout << "\nmax OLP = " << max_olp << " index = " << index_olp <<
		"\nmaxh = " << max_u << " index = " << index
		<< "\nmin h = " << min_u << " index = " << index_min_u
		<< "\ncount mul = " << count_mul << "\ncount div = " << count_div;
}

std::pair<double, double> MainTask::calculate_next_v(double curr_h, double curr_v1, double curr_v2) {
	double k_11 = f1(curr_v2);
	double k_12 = f2(curr_v1, curr_v2);

	double k_21 = f1(curr_v2 + curr_h / 2 * k_12);
	double k_22 = f2(curr_v1 + curr_h / 2 * k_11, curr_v2 + curr_h / 2 * k_12);

	double k_31 = f1(curr_v2 + curr_h / 2 * k_22);
	double k_32 = f2(curr_v1 + curr_h / 2 * k_21, curr_v2 + curr_h / 2 * k_22);

	double k_41 = f1(curr_v2 + curr_h * k_32);
	double k_42 = f2(curr_v1 + curr_h * k_31, curr_v2 + curr_h * k_32);

	double next_v1 = curr_v1 + curr_h / 6 * (k_11 + 2 * k_21 + 2 * k_31 + k_41);
	double next_v2 = curr_v2 + curr_h / 6 * (k_12 + 2 * k_22 + 2 * k_32 + k_42);
	return { next_v1, next_v2 };
}

int MainTask::epsilon_check(double local_error_rate_i) {
	if (epsilon / 32.0 <= local_error_rate_i && local_error_rate_i <= epsilon) {
		return 1;
	}
	else if (local_error_rate_i < epsilon / 32.0) {
		return 3;
	}
	else {
		return 0;
	}
}
void MainTask::MRK4() {
	double curr_v1 = u_0;
	double curr_v2 = u_first_dif;
	double curr_x = x_0;
	double curr_h = this->curr_h;

	int counter = 0;
	int counter_div = 0;
	int counter_mul = 0;
	int counter_success = 0;

	bool IsDiv = false;

	StepResultMainTask^ row_first = gcnew StepResultMainTask();//start point
	row_first->iter = counter;
	row_first->x = this->x_0;
	row_first->u_approximate = u_0;
	row_first->u_first_dif_approximate = u_first_dif;
	row_first->u_2_approximate = u_0;
	row_first->diff_u2_u_approximate = 0;
	row_first->local_error_rate = 0;
	row_first->curr_h = this->curr_h;
	row_first->counter_div = counter_div;
	row_first->counter_mul = counter_mul;
	MainResults->Add(row_first);

	while (curr_x < x_end && counter < max_operation) {
		if (curr_h < 1e-12) {
			std::cout << "Step too small\n";
			break;
		}
		if (!IsDiv) {
			counter_div = 0;
			counter_mul = 0;
		}		

		double next_x = curr_x + curr_h;
			
		auto res = calculate_next_v(curr_h, curr_v1, curr_v2);//u_approximate
		double next_v1 = res.first;
		double next_v2 = res.second;

		auto res_half = calculate_next_v(curr_h/2, curr_v1, curr_v2);//u_approximate_first_half
		double tmp_v1 = res_half.first;
		double tmp_v2 = res_half.second;
		auto res_half_second_step = calculate_next_v(curr_h/2, tmp_v1, tmp_v2);//u_approximate_second_half
		tmp_v1 = res_half_second_step.first;
		tmp_v2 = res_half_second_step.second;
		
		double diff_u2_u_approximate1 = std::fabs(tmp_v1 - next_v1);
		double diff_u2_u_approximate2 = std::fabs(tmp_v2 - next_v2);

		double local_error_rate1 = diff_u2_u_approximate1 / 15;
		double local_error_rate2 = diff_u2_u_approximate2 / 15;

		double next_h = curr_h;
		if (IsDinamicStep) {
			int point_counter = 0;
			point_counter += epsilon_check(local_error_rate1);
			point_counter += epsilon_check(local_error_rate2);
			if (point_counter == 6) {
				next_h *= 2;
				counter_mul = 1;
				std::cout << "\n\nnext h*=2 cool, make print";
			}
			else if (2 <= point_counter && point_counter <= 5) {
				std::cout << "\n\ngood, make print";
			}
			else {
				std::cout << "\nvery bad.Restart step\n";
				curr_h /= 2.0;
				counter_div = 1;
				IsDiv = true;
				counter++;
				continue;
			}
		}

		StepResultMainTask^ next_row = gcnew StepResultMainTask();//start point
		next_row->iter = ++counter_success;
		next_row->x = next_x;
		next_row->u_approximate = next_v1;
		next_row->u_first_dif_approximate = next_v2;
		next_row->u_2_approximate = tmp_v1;
		next_row->diff_u2_u_approximate = diff_u2_u_approximate1;
		next_row->local_error_rate = local_error_rate1;
		next_row->curr_h= curr_h;
		next_row->counter_div = counter_div;
		next_row->counter_mul = counter_mul;
		MainResults->Add(next_row);

		curr_h = std::min(x_end - curr_x, next_h);
		curr_x = next_x;
		curr_v1 = next_v1;
		curr_v2 = next_v2;
		counter++;

		IsDiv = false;
	}
	if (counter >= max_operation) {
		std::cout << "Max operations reached\n";
	}
};