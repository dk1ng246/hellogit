#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	srting employee;
	double employeew;
	
	vectoer<Payroll>v1;
	for(int i=0; i<4; i++)
	{
		cout << "Enter employee's name";
		cin >> employee;
		cout << "Enter employee's wage";
		cin >> employeew;

		PayRoll newEmployee(employee, employeew);
		v1.push_back(newEmployee);
	}
	cout << endl;

	for(int i=0; i<4; i++)
	{
		cout << v1[i]<< " ";
	}
	cout << endl;

	return 0;
}
