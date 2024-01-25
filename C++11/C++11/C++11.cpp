// C++11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdarg>
using namespace std;
class rectangle final
{
public:
    int length=0;
    int breadth=0;
    rectangle(int a = 0, int b = 0)
    {
        length = a;
        breadth = b;
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
int sum(int n, ...)
{
    va_list list;
    va_start(list, n);
     int s = 0;

    for (int i = 0; i < n; i++)
    {
        s += va_arg(list, int);
    }
    return s;
}
int main()
{
    shared_ptr<rectangle> p1(new rectangle(10, 5));
    cout << p1->area()<< endl;
    shared_ptr<rectangle> p2;
    p2 = p1;
    cout << p2->area()<<endl;
    cout << p1.use_count() << endl;

    auto x = 50;
    decltype(x) y = 10;
    rectangle r1;
    r1.length = x;
    r1.breadth = y;
    auto a = [x, y]() ->int {return x * y; };
    cout << a() << endl;
    cout << "area is: " << r1.area() << endl;
    cout << "perimeter is: " << r1.perimeter() << endl;

    cout<<"sum of five numbers:"<<sum(5, 1, 2, 3, 4, 5);

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
