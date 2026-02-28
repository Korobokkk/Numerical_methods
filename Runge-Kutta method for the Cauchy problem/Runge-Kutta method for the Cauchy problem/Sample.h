#pragma once

#include <iostream>
//#include <vector>

using namespace System::ComponentModel;

public value struct StepResult {
public:
	int iter;
	double x;
	double u_approximate;
	double u_2_approximate;
	double diff_u2_u_approximate;
	double local_error_rate;
	double curr_h;
	int counter_div;
	int counter_mul;
	double u_true;
	double global_error_rate;
};

public ref class Sample
{
public:
	//тест данные
	Sample() {
		CreateSampleData(2, 0.0, 1.0, 0.01, 1.0, 0.00000001, 1);
		results = gcnew BindingList<StepResult>();
	}
	
	Sample(int var, double x_0, double x_end, double h, double u_0, double epsilon, bool IsDinamicStep) {
		CreateSampleData(var, x_0, x_end, h, u_0, epsilon, IsDinamicStep);
		results = gcnew BindingList<StepResult>();
	}
	BindingList<StepResult>^ results;
	void CreateSampleData(int var, double x_0, double x_end, double h, double u_0, double epsilon, bool IsDinamicStep);
	void PrintSampleData();
	void MethodRungeKutta();
	void GlobalErrorRate();
	void LocalErrorRate();
private:
	int variant_num;
	double x_0;
	double x_end;
	double h;
	double u_0;
	double epsilon;
	bool IsDinamicStep;
};