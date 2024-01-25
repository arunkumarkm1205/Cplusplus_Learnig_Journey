// program to calculate the netsalary 
#include <iostream>
using namespace std;
int main() {
	float NS, BS, A, D;
	cout << "\n Enter your Basic Salary:";
	cin >> BS;
	cout << "\n Enter your percentage of Allowance:";
	cin >> A;
	cout << "\n Enter your  Parcentage of Deduction:";
	cin >> D;
	NS = BS + (BS * (A / 100)) - (BS * (D / 100));
	cout << "\n the NetSalary is :" << NS;
	return 0;
}