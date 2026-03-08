#include "pch.h"
#include "MainTask.h"
#include <cmath>
#include <iostream>

void MainTask::MRK4() {
	double curr_u1 = u_first_dif;
	double curr_u2 = - c / m * u_first_dif - k / m * u_0 - k_second / m * pow(u_0, 3);
	double curr_u = u_0;
	double curr_x = x_0;
	double curr_h = this->curr_h;

	int counter = 0;
	int counter_div = 0;
	int counter_mul = 0;

	StepResultMainTask^ row_first = gcnew StepResultMainTask();//стартовая точка
	row_first->iter = counter;
	row_first->x = this->x_0;
	row_first->u_approximate = u_0;
	row_first->u_2_approximate = u_0;
	row_first->diff_u2_u_approximate = 0;
	row_first->local_error_rate = 0;
	row_first->curr_h = this->curr_h;
	row_first->counter_div = counter_div;
	row_first->counter_mul = counter_mul;
	MainResults->Add(row_first);

	while (curr_x < x_end && counter < max_operation) {
		int next_x = curr_x + curr_h;
				

		//...

		if (1) {
			curr_x = next_x;
			//...
		}
		counter++;
	}

	/*property int iter;
	property double x;
	property double u_approximate;
	property double u_2_approximate;
	property double diff_u2_u_approximate;
	property double local_error_rate;
	property double curr_h;
	property int counter_div;
	property int counter_mul;*/

};