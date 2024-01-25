// STLContainersClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int a = 0;
class item
{
public:
    string name;
    int price;
    int quantity;
    item(string n="", int p = 0, int q = 0)
    {
        name = n;
        price = p;
        quantity = q;
    }
    friend ostream& operator<<(ostream& out, item& s);
    friend ofstream& operator<<(ofstream& ofs, item& s);
    friend ifstream& operator>>(ifstream& ifs, item& s);
};
ostream& operator<<(ostream& out, item& s)
{   
    out << "product :" << ++a << "  name is " << s.name << endl << "price is :"<< s.price << endl;
    out<< "number of quantity : " << s.quantity << endl;
    return out;
}
ofstream& operator<<(ofstream& ofs, item& s)
{
    ofs << s.name << endl;
    ofs << s.price << endl;
    ofs << s.quantity << endl;
    return ofs;
}
ifstream& operator>>(ifstream& ifs, item& s)
{
    ifs >> s.name;
    ifs >> s.price;
    ifs >> s.quantity;
    return ifs;
}
int main()
{   
    string na;
    int p, q;
    item k;
    vector<item *> s;
    int m=0;
    cout << "enter the number of items :";
    cin >> m;
    vector<item *>::iterator itr;
    for (int i = 0; i< m; i++)
    {
        
        cout << " the product number :" << i+1 << endl << "name,price,quantity in order :";
        cin >> na >> p >> q;
        s.push_back(new item(na,p,q));
       
    }
    ofstream ofs("mytext.txt");
    for (itr = s.begin(); itr!=s.end(); itr++)
    {
        ofs << **itr;
    }
    ofs.close();
    ifstream ifs("mytext.txt");
    for (int i = 0; i < m; i++)
    {
        ifs >> k;
        cout << "item " << i + 1 << endl << k << endl;
    }
    ifs.close();
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
