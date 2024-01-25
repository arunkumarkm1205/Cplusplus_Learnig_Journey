#include <iostream>
using namespace std;
int main()
{
	int x = -2147483648;
	char y = 127;
	y++;
	x--;
	// the range for char is -128 to 127
	// the range for int is -2147483648 to 2147483647
	cout << "the size of Y is=" << sizeof(y) << endl;
	cout << "value of char variable Y=" << int(y) << endl;

	cout <<"the size of X is=" << sizeof(x) << endl;
	cout << "value of int variable X=" << x << endl;


	return 0;

}