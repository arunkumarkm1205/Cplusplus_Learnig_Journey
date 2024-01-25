#include <iostream>
using namespace std;
int main()
{    // compond assignment example 
	//addition 
	float x = 10, sum = 20;
	sum += x;
	cout << "the sum is :" << sum;
	// subtraction
	x -= 1;
	cout << "\nx is:" << x;
	//multiplication
	sum *= x;
	cout << "\nthe product is :" << sum;
	//devision
	sum /= x;
	cout << "\nthe fraction is " << sum;

	return 0;
}