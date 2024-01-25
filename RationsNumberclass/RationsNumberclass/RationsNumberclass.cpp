// RationsNumberclass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class rational
{
private:
    float p;
    float q;
public:
    
    /*rational()
    {
        p = 0;
        q = 0;
    }*/
    rational(float a=0.0f, float b=0.0f)
    {
        if (a != 0 && b != 0)
        {
            setnum(a);
            setdin(b);
        }
       
    }
    void setnum(float a=0);
    void setdin(float b=0);
    friend ostream& operator<<(ostream& out, rational& r);
    friend rational operator+(rational& r1, rational& r2);
    
};
ostream& operator<<(ostream& out, rational& r)
{
    out << r.p << "/" << r.q<<" fracton value is: "<<r.p/r.q;
    return out;
}
rational operator+(rational& r1, rational& r2)
{
    rational t;
    if (r1.q == r2.q)
    {
        t.p = r1.p + r2.p;
        t.q = r1.q;
    }
    else
    {
        t.q = r1.q * r2.q;
        t.p = ((r1.p * t.q) / r1.q) + ((r2.p * t.q) / r2.q);
    }
    return t;
}


int main()
{
    rational r1(10.0f,50.0f), r2(20.0f,60.0f), r3;
   /* cout << "enter your first rational number:";
    r1.setnum();
    r1.setdin();
    cout << "enter your second rational number:";
    r2.setnum();
    r2.setdin();*/
    r3 = r1 + r2;
    cout << r3;
6}
void rational::setnum(float a)
{
    if (a!= 0)
    {
        p = a;
    }
    else
        cin >> p;
}
void rational::setdin(float b)
{   
    if (b != 0)
    {
        q = b;
    }
    else
    {
        int t;
        cin >> t;
        if (t != 0)
            q = t;
    }
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
