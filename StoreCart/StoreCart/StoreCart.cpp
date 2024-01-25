// StoreCart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 int a=1;
class student
{
public:
    string name;
    int price = 0;
    int quantity = 0;
    int a = 0;
    friend ostream& operator<<(ostream& out, student& s);
    friend ofstream& operator<<(ofstream& ofs, student& s);
    friend ifstream& operator>>(ifstream& ifs, student& s);
};
ostream& operator<<(ostream& out, student& s5)
{ 
    
    out <<"item no "<<a++<<" name is :" << s5.name << endl << "price: " << s5.price << endl << "number of quantity: " << s5.quantity << endl;
    return out;
}
ofstream& operator<<(ofstream& ofs, student& s4)
{
    ofs << s4.name << endl;
    ofs << s4.price << endl;
    ofs << s4.quantity << endl;
    return ofs;
}
ifstream& operator>>(ifstream& ifs, student& s3)
{

    ifs >> s3.name;
    ifs >> s3.price;
    ifs >> s3.quantity;
    return ifs;
}
//int student::a = 0;
int main()
{
    int n = 0;
    student s1[20], s2[20], s3, s4;
    cout << "eneter number of items: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the name price and quantity :";
        cin >> s1[i].name >> s1[i].price >> s1[i].quantity;
    }

    ofstream ofs("mytext2.txt",ios::trunc);
    for (int i = 0; i < n; i++)
        ofs << s1[i];
    
    ofs.close();
    ifstream ifs("mytext2.txt");
    for (int i = 0; i < n; i++)
        ifs >> s2[i];
    ifs.close();
    for (int i = 0; i < n; i++) {
        cout << s2[i];
        cout << endl;
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
