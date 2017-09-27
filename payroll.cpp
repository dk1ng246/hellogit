#include"payroll.h"
#include<string>
using namespace std;

string Payroll::getEmployee()
{
	return employee;
}
void Payroll::setEmployee(string e)
{
	employee = e;
}

double Payroll::getWage()
{
	return wage;
}
void Payroll::setWage(double w)
{
	wage = w;
}

Payroll::Payroll(string e, double w)
{
	employee = e;
	wage = w;
}

