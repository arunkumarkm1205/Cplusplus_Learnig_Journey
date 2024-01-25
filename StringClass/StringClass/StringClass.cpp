// StringClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//basic function of string class

#include <iostream>
#include <string>
using namespace std;
int main()
{   
    string s1="hello world ";
    char s2[20];

    /*cout << s1.length() << endl;
    cout << s1.size() << endl;
    cout << s1.capacity() << endl;
    cout << s1.max_size() << endl;
    s1.resize(60);
    cout << s1.capacity() << endl;
    s1.clear();
    cout << s1;
    if (s1.empty())
        cout << "string is empty"<<endl;
    else
        cout << "string is:" << s1;
    string s2 = "Hello";
    s2.append(" world");
    cout << s2<<endl;
    s2.insert(5, " newz", 4);
    cout << s2<<endl;*/
   /* string s2 = "my world";
    cout << s2.replace(3, 6, "new")<<endl;
    s1.swap(s1);
    cout << s1 << " " << s2;*/
   /* s1.copy(s2,100);
    cout << s2<<endl;
    cout << s1.find_last_of("l");*/
    cout << s1.substr(1, 3) << endl;
    cout << s1[4]<<endl;
    s1 = s1 + "C++";
    cout << s1<<endl;
    cout << s1.at(4)<<endl;
    cout << s1.front() << endl;
    cout << s1.back()<<endl;

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
