// Rotate4DMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{ 
    int i,j, m=0, n=3, l,a[4][4],b[4][4];
    cout << "enter 4*4 matrix"<<endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "input:\n";
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    for (int k = 0; k < 4; k++)
    {

   
        for (i = 0; i < 4; i++)
        {
            b[m][i] = a[i][n];
        }
        m++;
        n--;
    }
    cout<< " output" << endl;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << b[i][j];
        }
        cout << endl;
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
