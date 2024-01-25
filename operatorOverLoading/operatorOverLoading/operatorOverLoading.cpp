// operatorOverLoading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;
public:
    complex(int r=0, int i=0)
    {
        img = i;
        real = r;
    }
    friend ostream & operator<<(ostream& out, complex& c);
    friend complex operator+(complex& c1, complex& c2);
    
};
ostream& operator<<(ostream& out, complex& c)
{
    cout << c.real << " + i" << c.img << endl;
    return out;
}
complex operator+(complex& c1, complex& c2)
{
    complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}

int main()
{
    complex c1(10, 2), c2(5, 10), c3;
    c3 = c1 + c2;
    cout << c3;
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
