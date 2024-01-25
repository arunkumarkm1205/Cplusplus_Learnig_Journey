// productOfMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{   
    int i, j, m1,n1,m2,n2;
    int a[10][10];
    int b[10][10];
    int c[10][10];
    cout << "enter the row and coloum:";
    cin >> m1 >> n1;
    cout << "enter the row and coloum:";
    cin >> m2 >> n2;
    if (n1 != m2) {
        cout << "multiplication not possible";
        exit(0);
    }
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            cout << "enter the first matrix  " << i << " " << j << "th element:";
            cin >> a[i][j];
        }
    }
    cout << endl;
    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            cout << "enter the second matrix  " << i << " " << j << "th element:";
            cin >> b[i][j];
        }
    }
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {    
            c[i][j] = 0;
            for (int k = 0; k < n2; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "the product matrix is :\n";
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            cout << c[i][j] << " ";
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
