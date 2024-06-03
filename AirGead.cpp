#include <iomanip>
#include <iostream>
#include <Windows.h>
#include "AirGead.H"
#include "MainForm.h"



using namespace std;

double AirGead::YearEndBal(double t_openAmt, double t_monthlyDep, double t_annualInt, int t_years) {
	int totalMonths = t_years * 12;
	int i;
	int j;
	double yearEndBal{};
	double monthInt;
	double monthlyInt = 0;
	AirGead airGead;
	Project2::MainForm menu;
	

	for (i = 1; i <= t_years; ++i) {
		monthlyInt = 0;
		yearEndBal = 0;
		for (j = 1; j <= 12; ++j) {
			monthInt = (t_openAmt + t_monthlyDep) * ((t_annualInt / 100) / 12);
			monthlyInt += monthInt;
			t_openAmt += monthInt + t_monthlyDep;

		}
		yearEndBal += t_openAmt;
	}
	return yearEndBal;
}

double AirGead::MonthlyContributionsCalc(double t_monthlyDep, int t_years) {
	double monthlyDep = t_monthlyDep;
	int totalMonths = t_years * 12;

	return monthlyDep * totalMonths;
}
