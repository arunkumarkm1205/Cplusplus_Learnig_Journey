// BinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    
    
    int A[8];
    cout << "enter the array in assendig order :";
    for (int k=0;k<8;k++) 
    {
        cin >> A[k];
    }
    int key;
    cout << "enter the key:";
    cin >> key;
    int i, l = 0, m, h = 8;

    for (i = 0; i < 8; i++)
    {
        m = (l + h) / 2;
        if (A[m] > key)
            h = --m;
        else if (A[m] < key)
            l = ++m;
         
    }
    if (A[m] == key)
        cout << key<< " key is found";
    else
        cout << key<<" key not found";
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
