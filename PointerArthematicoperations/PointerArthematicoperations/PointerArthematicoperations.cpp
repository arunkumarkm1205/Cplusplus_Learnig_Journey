// PointerArthematicoperations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a[7] = {1,2,31,4,5,6,7};
    int *p = a,*q=&a[4];
    /*cout << *p << " "<<p<< endl;
    p++;
    cout << *p <<" "<<p << " " << &a << endl;
    cout << *--p << " " << p << " " << &a<<endl;*/
    cout << *(p+3) << " " << p << " " << &a<<endl;
    cout << *(q-2) << " " << p << " " << &a<<endl; 
 /*   cout << q-p;*/

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
