// ShapesAbstract.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class shape
{
public:
    virtual int area() = 0;
    virtual int peri() = 0;
};
class rectangle :public shape
{
private:
    int length;
    int breadth;
public:
    rectangle(int l=0, int b=0)
    {
        length = l;
        breadth = b;
    }
    int area() { return length * breadth; }
    int peri() { return 2 * (length + breadth); }
};
class circle :public shape
{
private:
    int redius;
public:
    circle(int r=0)
    {
        redius = r;
    }
    int area() { return 3.14 * redius * redius; }
    int peri() { return 2 * 3.14 * redius; }
};
int main()
{
    shape* c = new rectangle(7, 5);
    cout << "area of rectangle is :" << c->area() << endl;
    cout << "perimeter of the rectangle is : " << c->peri()<<endl;
    c = new circle(12);
    cout << "area of circle is :" << c->area() << endl;
    cout << "perimeter of the circle is :" << c->peri() << endl;
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
