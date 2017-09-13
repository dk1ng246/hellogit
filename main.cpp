#include<iostream>
#include<string>
#include<vector>
#include"payroll.h"
using namespace std;

int main()
{
		
	vector<Payroll>v1;
	for(int i=0; i<4; i++)
	{
		cout << "Enter employee's name";
		cin >> employee;
		cout << "Enter employee's wage";
		cin >> wage;

		Payroll newEmployee(employee, wage);
		v1.push_back(newEmployee);
	}
	cout << endl;

	for(auto v:v1)
	{
		cout << v.getemployee()<<" "<<v.getwage()<<endl;
	}
	cout << endl;

	return 0;
}
