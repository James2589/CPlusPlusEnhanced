#pragma once
#ifndef AirGead_desktop_CS499_h
#define AirGead_desktop_CS499_h

//header file declaring public functions and private variables
class AirGead {
public:
	double YearEndBal(double t_openAmt, double t_monthlyDep, double t_annualInt, int t_years);
	double MonthlyContributionsCalc(double t_monthlyDep, int t_years);
	
private:
	double m_openingAmount;
	double m_monthlyDeposit;
	double m_annualInterest;
	double m_yearEndTotal;
	int m_totalYears;
	
};

#endif 