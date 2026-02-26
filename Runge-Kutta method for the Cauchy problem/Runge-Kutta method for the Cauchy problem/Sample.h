#pragma once

#include <iostream>
ref class Sample
{
public:
	//тест данные
	Sample() {
		CreateSampleData(2, 1.0, 10.0, 1.0, 1.0, 1.0);
	}
	
	Sample(int var, double x_0, double x_end, double h, double u_0, double epsilon) {
		CreateSampleData(var, x_0, x_end, h, u_0, epsilon);
	}
	void CreateSampleData(int var, double x_0, double x_end, double h, double u_0, double epsilon);
	void PrintSampleData();
	const void MethodRungeKutta();
	void GlobalErrorRate();
	void LocalErrorRate();
private:
	int variant_num;
	double x_0;
	double x_end;
	double h;
	double u_0;
	double epsilon;
};
