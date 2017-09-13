#include<iostream>
#include<string>
#ifndef PAYROLL_H
#define PAYROLL_H

class Payroll
{
	private:
	string employee = " ";
	double wage = 0.0;
	
	public:
	Payroll(string e, double w);
	string getEmployee();
	void setEmployee(string);
	int getWage();
	void setWage(double);
};
#endif
