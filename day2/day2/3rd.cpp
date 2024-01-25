#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	cout << "please enter your name " << endl;
	getline(cin, name);
	//cin >> name;
	cout << "your name is :" << name;
	return 0;


}