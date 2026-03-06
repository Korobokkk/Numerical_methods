#pragma once

#include <iostream>
//#include <vector>

using namespace System::ComponentModel;

public ref class StepResult{
public:
	property int iter;
	property double x;
	property double u_approximate;
	property double u_2_approximate;
	property double diff_u2_u_approximate;
	property double local_error_rate;
	property double curr_h;
	property int counter_div;
	property int counter_mul;
	property double u_true;
	property double global_error_rate;
};

public ref class Sample
{
public:
	//тест данные
	Sample() {
		CreateSampleData(2, 0.0, 1.0, 0.01, 1.0, 0.00000001, 1);
		results = gcnew BindingList<StepResult^>();
	}
	
	Sample(int var, double x_0, double x_end, double h, double u_0, double epsilon, bool IsDinamicStep) {
		CreateSampleData(var, x_0, x_end, h, u_0, epsilon, IsDinamicStep);
		results = gcnew BindingList<StepResult^>();
	}
	BindingList<StepResult^>^ results;
	void CreateSampleData(int var, double x_0, double x_end, double h, double u_0, double epsilon, bool IsDinamicStep);
	void PrintSampleData();
	void MethodRungeKutta();
private:
	int variant_num;
	double x_0;
	double x_end;
	double h;
	double u_0;
	double epsilon;
	bool IsDinamicStep;
};