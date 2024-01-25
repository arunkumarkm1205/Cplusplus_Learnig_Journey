#include<iostream>
using namespace std;
int main()
{
	float a, b;
	char exp;
	cout << "enter the numbers \n";
	cin >> a >> b;
	cout << "enter the expression\n";
	cin >> exp;
	switch (exp)
	{
	case '+':cout << "sum=" << a + b;
		break;
	case '-':cout << "defrence=" << a - b;
		break;
	case '*':cout << "product=" << a * b;
		break;
	case '/':
		if (b == 0) {
			cout << "zero error";
			terminate;
		}
		else
			cout << "devision=" << a / b;
		break;
	default:cout << "invalid expression\n";
	}
	return 0;
}