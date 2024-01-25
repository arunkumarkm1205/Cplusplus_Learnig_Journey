//offer eligibilty check  for kids and old age peoples
#include<iostream>
using namespace std;
int main()
{
	int A;
	cout << "Enter your age" << endl;
	cin >> A;
	if (A <= 12 || A >= 50)
		cout << "your eligible the offer" << endl;
	else
		cout << "your not eligible for the offer " << endl;
	return 0;


}