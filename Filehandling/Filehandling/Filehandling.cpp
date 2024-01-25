#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class student
{ 
public:
    string name;
    int rollno=0;
    string branch;
    friend ostream & operator<<(ostream& out, student& s);
    friend ofstream & operator<<(ofstream& ofs, student& s);
    friend ifstream & operator>>(ifstream& ifs, student& s);
};
ostream & operator<<(ostream& out, student& s5)
{
    out << s5.name << endl << s5.rollno << endl << s5.branch;
    return out;
}
ofstream &  operator<<(ofstream & ofs, student& s4)
{
    ofs << s4.name<<endl ;
    ofs << s4.rollno<<endl ;
    ofs << s4.branch<<endl ;
    return ofs;
}
ifstream & operator>>(ifstream & ifs, student& s3)
{
    
    getline(ifs , s3.name);
    ifs >> s3.rollno;
    ifs >> s3.branch;
    return ifs;
}
int main()
{
    student s1, s2;
    s1.name = "Arun Kumar K M";
    s1.rollno = 1205;
    s1.branch = "ECE";
    ofstream ofs("mytext1.txt");
    ofs << s1;
    ofs.close();
    ifstream ifs("mytext1.txt");
    ifs >> s2;
    ifs.close();
    cout << s2;
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
