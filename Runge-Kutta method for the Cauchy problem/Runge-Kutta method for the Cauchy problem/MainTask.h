#pragma once
#include <iostream>
#include <utility>

using namespace System::ComponentModel;

public ref class StepResultMainTask{
public:
	property int iter;
	property double x;
	property double u_approximate;
	property double u_first_dif_approximate;
	property double u_2_approximate;
	property double diff_u2_u_approximate;
	property double local_error_rate;
	property double curr_h;
	property int counter_div;
	property int counter_mul;
};


ref class MainTask
{
public:
	MainTask() {
		this->m = 0.01;
		this->c = 0.15;
		this->k = 2.0;
		this->k_second = 2.0;
		this->u_0 = 10;
		this->u_first_dif = 0.0;
		this->x_0 = 0;
		this->x_end = 1.0;
		this->curr_h = 0.01;
		this->max_operation = 10000;
		this->epsilon = 0.00000001;
		this->IsDinamicStep = 1;
		MainResults = gcnew BindingList<StepResultMainTask^>();
	}
	MainTask(double m, double c, double k, double k_second, double u_0, double u_first_dif, double x_0, double x_end, double h, double max_operation, double epsilon, bool IsDinamicStep) {
		this->m = m;
		this->c = c;
		this->k = k;
		this->k_second = k_second;
		this->u_0 = u_0;
		this->u_first_dif = u_first_dif;
		this->x_0 = x_0;
		this->x_end = x_end;
		this->curr_h = h;
		this->max_operation = max_operation;
		this->epsilon = epsilon;
		this->IsDinamicStep = IsDinamicStep;
		MainResults = gcnew BindingList<StepResultMainTask^>();
	};
	double f2(double y1, double y2);
	std::pair<double, double> calculate_next_v(double curr_h, double curr_v1, double curr_v2);
	int epsilon_check(double local_error_rate);
	void MRK4();
	BindingList<StepResultMainTask^>^ MainResults;
private:
	double m;
	double c;
	double k;
	double k_second;
	double u_0;
	double u_first_dif;
	double x_0;
	double x_end;
	double curr_h;
	double max_operation;
	double epsilon;
	bool IsDinamicStep;
};

