// Calculation of salary , income tax and net salary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){
	int salary;
	double incometax, netsalary ;

	cout << "Enter your  yearly salary  " << endl;
	cin >> salary;

	if (salary > 85000) {
		incometax = salary * 0.6;
		netsalary = incometax - salary;
	}
	else if (salary >= 74000) {
		incometax = salary * 0.7;
		netsalary = incometax - salary;
	}
	else if (salary >= 65000) {
		incometax = salary * 0.15;
		netsalary = incometax - salary;
	}
	else if (salary >= 50000) {
		incometax = salary * 0.25;
		netsalary = incometax - salary;
	}
	else if (salary >= 30000) {
		incometax = salary * 0.45;
		netsalary = incometax - salary;
	}
	cout << "The salary is :" << salary << endl;
	cout << "The income tax  is: " <<incometax << endl;
	cout << "The  net salary is: " <<netsalary << endl;

	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
