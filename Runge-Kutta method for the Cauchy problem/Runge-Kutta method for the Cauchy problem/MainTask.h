#pragma once
ref class MainTask
{
public:
	MainTask() {
		this->m = 1.0;
		this->c = 0.15;
		this->k = 2.0;
		this->k_second = 2.0;
		this->u_0 = 10;
		this->u_first_dif = 0.0;
		this->x_0 = 0;
		this->x_end = 1.0;
		this->IsDinamicStep = 1;
	}
private:
	double m;
	double c;
	double k;
	double k_second;
	double u_0;
	double u_first_dif;
	double x_0;
	double x_end;
	bool IsDinamicStep;
};

