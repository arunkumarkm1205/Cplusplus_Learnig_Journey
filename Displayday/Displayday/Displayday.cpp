#include <iostream>
using namespace std;
int main() {
	int d;
	cout << "enter the day number \n";
	cin >> d;
	if (d == 1)
		cout << "mon";
	else if (d == 2)
		cout << "tue";
	else if (d == 3)
		cout << "wed";
	else if (d == 4)
		cout << "thu";
	else if (d == 5)
		cout << "fri";
	else if (d == 6)
		cout << "sat";
	else if (d == 7)
		cout << "sun";
	else
		cout << "invalid date";
	return 0;

}