// RootOfQuadraticEQ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float Root1, Root2;
    int a, b, c , D ;
    cout << "enther tha value of a,b,c\n";
    cin >> a >> b >> c;
    D = (b * b) - 4 * a * c;
    if (D<0){
        cout << "the roots are imaginary\n";
    
    }
    else
    {
        Root1 = (-b + (D)) / (2 * a);
        Root2 = (-b - (D)) / (2 * a);
        cout << "\nthe Root1 is :" << Root1 << "\nthe Root2 is :" << Root2;

    }
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
