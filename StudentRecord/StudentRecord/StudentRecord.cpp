// StudentRecord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int a = 0;
class student
{
private:
    string Name;
    int RollNumber;
    int Marks1;
    int Marks2;
    int Marks3;
public:
    student() {
       this-> Name = "zero";
       this-> RollNumber=0;
       this-> Marks1=0;
       this-> Marks2=0;
       this-> Marks3=0;
    }
    void getname();
    void getrollnumber();
    void getmarks();
    string givename();
    int total();
    char grade();
};

int main()
{
    student s1;
    cout << "enter your name:";
    s1.getname();
    cout << "enter your roll number:";
    s1.getrollnumber();
    cout << "enter your 3 subject marks:";
    s1.getmarks();
    cout<<"your total marks is:" << s1.total() << endl;
    cout << "student "<<s1.givename()<<"grade is : " << s1.grade();
    return 0;
}
void student::getname()
{
    getline(cin,Name);
}
void student::getrollnumber()
{
    cin >> RollNumber;
}
void student::getmarks()
{
    cin >> Marks1 >> Marks2 >> Marks3;
}
int student::total()
{
    return Marks1 + Marks2 + Marks3;
}
char student::grade()
{
    if (total() >= 80)
        return 'A';
    else if (total() >= 60 && total() < 80)
        return 'B';
    else
        return 'C';


}
string student::givename()
{
    return this->Name;
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
