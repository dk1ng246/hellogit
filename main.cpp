#include<iostream>
#include<string>
#include<vector>
#include"payroll.h"
using namespace std;

int linearSearch(auto Data, auto key)//prototype
{
	for(int i =0; i < Data.size(); i ++)
	{
		if (Data[i].getEmployee() == key)//we found it
		{
			return i;//return its location
		}
	}//end for
	return -1;//element not found
}

int main()
{
	string employee;
	double employeew;
	string search_key;
	int result;
	vector<Payroll>v1;
	for(int i=0; i<4; i++)
	{
		cout << "Enter employee's name";
		cin >> employee;
		cout << "Enter employee's wage";
		cin >> employeew;

		Payroll newEmployee(employee, employeew);
		v1.push_back(newEmployee);
	}
	cout << endl;

	for(auto v:v1)
	{
		cout << v.getEmployee()<<" "<<v.getWage()<<endl;
	}
	cout << endl;
	
	cout<<"Enter a value to search for: ";

    cin>>search_key;
	while(search_key != "#")//perform searches until sentinel entered
    {
        result = linearSearch(v1,search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }
	
	return 0;
}
