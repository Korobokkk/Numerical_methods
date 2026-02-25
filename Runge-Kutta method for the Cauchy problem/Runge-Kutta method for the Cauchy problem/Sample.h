#pragma once

#include <iostream>
ref class Sample
{
public:
	Sample() {
		CreateSampleData(2, 1.0, 10.0, 0.0, 1.0);
	}
	//тест данные
	Sample(int var, double x_0, double x_end, double h, double u_0) {
		CreateSampleData(var, x_0, x_end, h, u_0);
	}
	void CreateSampleData(int var, double x_0, double x_end, double h, double u_0);
	void PrintSampleData();
private:
	int variant_num;
	double x_0;
	double x_end;
	double h;
	double u_0;
};

//int main() {
//	Sample tmp;
//	tmp.PrintSampleData();
//}