#include "payroll.h'
#include <string>

string Payroll::getEmployee()
{
	return employee;
}
void Payroll::setEmployee(string s)
{
	employee = e;
}

double Payroll::getWage()
{
	return wage;
}
void Payroll::SetWage(double w)
{
	wage = w;
}

Payroll::Payroll(string e, double w)
{
	employee = e;
	wage = w;
}

