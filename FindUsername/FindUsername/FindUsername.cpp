// FindUsername.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//    int k;
//    string s = "arunkumarkm1205@gmail.com";
//    string u;
//    k = s.find('@');
//    u = s.substr(0, k );
//    cout << u;
//    return 0;
//
//
//   
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    int k;

    char s[100] = "arunkumarkm1205@gmail.com";
    int len = strlen(s);
    char u[100];
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '@')
            k = i;
    }

    strncpy_s(u, s, k);
    cout << u;
    return 0;



}