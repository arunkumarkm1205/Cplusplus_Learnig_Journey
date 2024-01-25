#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << "enter the year:";
	cin >> year;
	if ((year % 400) == 0 || ( (year % 4) == 0 && (year % 100)!=0 ))
		cout << "the years " << year << " is a leaper";
	else 
		cout << "the years " << year << " is a not a leaper";
	return 0;
}