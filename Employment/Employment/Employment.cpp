// Employment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
class employe
{
private:
    int id;
    string name;
public:
    employe(int i, string n)
    {
        id = i;
        name = n;
    }
    int getid() { return id; }
    string getname() { return name; }
};
class fulltime:public employe
{
private:
    int salary;
public:
    fulltime(int i, string n, int s) :employe(i, n)
    {
        salary = s;
    }
    int getsalary() { return salary; }
};
class parttime:public employe
{
private:
    int wage;
public:
    parttime(int l, string k, int w) :employe(l,k)
    {
        wage = w;
    }
    int getwage() { return wage; }
};

int main()
{
    fulltime p1(1, "arun", 50000);
    parttime p2(2, "karun", 500);

    cout << "the daily wage of " << p2.getname() << " is :" << p2.getwage()<<endl;
    cout << "the monthly salary of " << p1.getname() << " is :" << p1.getsalary()<<endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
