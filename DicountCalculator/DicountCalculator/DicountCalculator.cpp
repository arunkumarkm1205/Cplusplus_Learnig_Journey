#include<iostream>
using namespace std;
int main()
{
	float Bill;
	cout << "enter the total Bill:";
	cin >> Bill;
	if (Bill < 100)
		cout << "no dicount";
	else if (Bill >= 100 && Bill < 500)
		cout << "after 10% discout your total Bill is:" << Bill - (Bill * (0.1));
	else if (Bill >= 500)
		cout << "after 20% discount your total Bill is: " << Bill - (Bill * (0.2));
	return 0;
}