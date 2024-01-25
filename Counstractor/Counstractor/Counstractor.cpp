//datahiding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;
public:
    rectangle(int l=1,int b=1)
    {
        setlen(l);
        setbre(b);
    }
    rectangle(rectangle& rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }
    void setlen(int l)
    {
        if (l > 0)
            length = l;
        else
            length = 1;
    }
    void setbre(int b)
    {
        if (b > 0)
            breadth = b;
        else
            breadth = 1;
    }
    int getlen()
    {
        return length;
    }
    int getbre()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    rectangle r1(10,5);
    rectangle r2(r1);
    cout << "area is: " << r1.area() << endl;
    cout << "perimeter is: " << r2.perimeter() << endl;
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
