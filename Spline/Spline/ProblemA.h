#pragma once
#include <vector>
#include <iostream>

struct RunThroughCoef {
    std::vector<double> a;
    std::vector<double> b;
    std::vector<double> c;
    std::vector<double> d;
    std::vector<double> s;
    std::vector<double> s_f_d;
    std::vector<double> s_s_d;
    std::vector<double> f;
    std::vector<double> f_f_d;
    std::vector<double> f_s_d;
};

class ProblemA
{
public:
	ProblemA(int type_task = 1) {
		this->n = 4;
		this->a = -1;
		this->b = 1;
        this->s_double_dif_a = 0;
        this->s_double_dif_b = 0;
        this->h = (b - a) / n;
        this->type_task = type_task;
        CountCoef;
	};
    void CalculateF();
	void CountCoef();

    RunThroughCoef ThroughtCoef;

private:
	int n;
	double a;
	double b;
	double s_double_dif_a;
	double s_double_dif_b;
	double epsilon = 0.000001;
	double h;
    int type_task;
};

