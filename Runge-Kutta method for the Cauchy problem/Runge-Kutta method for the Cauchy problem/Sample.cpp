#include "pch.h"
#include "Sample.h"

#include <iostream>

void Sample::CreateSampleData(int var, double x_0, double x_end, double h, double u_0) {
	this->variant_num = 1;
	this->x_0 = 0;
	this->x_end = 10;
	this->h = 1;
	this->u_0 = 2;
	return;
};
void Sample::PrintSampleData() {
	std::cout << "var: "<< variant_num <<"\n x_0: " << x_0 << "\n x_end: " << x_end << "\n h: "  << h << "\n u_0: " << u_0;
	
}

