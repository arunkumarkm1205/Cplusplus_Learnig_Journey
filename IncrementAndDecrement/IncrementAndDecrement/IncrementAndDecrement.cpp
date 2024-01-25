#include <iostream>
using namespace std;
int main()
{
	int a=1, b=2, c=3,d=4;
	//pre increment 
	cout << "the value of the A before " << a << endl;
    cout<< "the value of A after pre increment is " << ++a << endl;
	//post increment
	cout << "the value of the B before " << b << endl;
	cout<< "the value of B after post increment is " << b++ << endl;
	//pre decrement 
	cout << "the value of the C before " << c << endl;
	cout<< "the value of C after pre decrement is " << --b << endl;
	//post decrement 
	cout << "the value of the D before " << d << endl;
	cout<< "the value of D after post decrement is " << d-- << endl;
	return 0;

}