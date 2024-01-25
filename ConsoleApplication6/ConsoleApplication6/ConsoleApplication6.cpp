// BankingSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;


class account
{
private:
    int accNo;
    string Name;
    int Balance;
    static int NextAccNo;
public:

    account(string name = "", int balance = 0);
    string getname();
    int getaccno();
    int getbalace();

    void deposite(int amount);
    void withdraw(int amount);
    static void setaccno(int accno);
    static int getlastaccno();
    friend  ofstream& operator<<(ofstream& ofs, account& acc);
    friend ifstream& operator>>(ifstream& ifs, account& acc);
    friend ostream& operator<<(ostream& out, account& acc);
};
int account::NextAccNo = 0;
class bank
{
private:
    map<int, account> data;
public:
    bank();
    account openaccount(string name, int balance);
    account balanceenquiry(int accno);
    account deposite(int accno, int amount);
    account withdrawal(int accno, int amount);
    void closeacc(int accno);
    void showall();
    ~bank();

};


int main()
{
    string name;
    account acc;
    bank b;
    int accno, amount, balance, choice;
    cout << "**banking system**" << endl;
    do
    {
        cout << "Welcome To Arun Bank";
        cout << "\n\t1. Open New Account ";
        cout << "\n\t2. Balance Enquiry";
        cout << "\n\t3. Deposite Money";
        cout << "\n\t4. Withdraw Money ";
        cout << "\n\t5. Close My  Account ";
        cout << "\n\t6. show all Account";
        cout << "\n\t7. quit " << endl;
        cout << "pick your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n Enter your first name: ";
            cin >> name;
            cout << "\n Enter your intital deposite: ";
            cin >> balance;
            acc = b.openaccount(name, balance);
            cout << "\n Welcome to our Bank\n  your account have been successfully created\n";
            cout << "your account details: \n" << acc << endl;
            break;

        case 2:cout << "Enter Your Account number: ";
            cin >> accno;
            acc = b.balanceenquiry(accno);
            cout << "your account details: \n" << acc << endl;
            break;

        case 3:cout << "Enter Your Account number: ";
            cin >> accno;
            cout << "Enter the amount: ";
            cin >> amount;
            acc = b.deposite(accno, amount);
            cout << "your account details: \n" << acc << endl;
            break;

        case 4:cout << "Enter Your Account number: ";
            cin >> accno;
            cout << "Enter the amount :";
            cin >> amount;
            acc = b.withdrawal(accno, amount);
            cout << "your account details: \n" << acc;
            break;

        case 5:cout << "Enter Your Account number: ";
            cin >> accno;
            cout << "\n\t Sorry To Let You Go\n ";
            b.closeacc(accno);
            break;

        case 6:cout << "all account details :\n";
            b.showall();
            break;
        case 7:break;

        default:cout << "Invalid Entry\n";
            exit(0);

        }
    } while (choice != 7);

    return 0;

}
account::account(string name, int balance)
{
    NextAccNo++;
    accNo = NextAccNo;
    Name = name;
    this->Balance = balance;

}
string account::getname()
{
    return Name;
}
int account::getaccno()
{
    return accNo;
}
int account::getbalace()
{
    return Balance;
}
void account::deposite(int amount)
{
    Balance += amount;
}
void account::withdraw(int amount)
{
    Balance -= amount;
}
void account::setaccno(int accno)
{
    NextAccNo = accno;
}
int account::getlastaccno()
{
    return NextAccNo;
}
ofstream& operator<<(ofstream& ofs, account& acc)
{
    ofs << acc.getaccno() << endl;
    ofs << acc.getname() << endl;
    ofs << acc.getbalace() << endl;
    return ofs;
}
ifstream& operator>>(ifstream& ifs, account& acc)
{
    ifs >> acc.accNo;
    ifs >> acc.Name;
    ifs >> acc.Balance;
    return ifs;
}
ostream& operator<<(ostream& out, account& acc)
{
    out << "Account number:" << acc.accNo << endl;
    out << "Name :" << acc.Name << endl;
    out << "Balance :" << acc.Balance << endl;
    return out;
}
bank::bank()
{
    account acc;
    ifstream infile;
    infile.open("bank.data");
    if (!infile)
    {
        cout << "file cant be opend " << endl;
        return;
    }
    while (!infile.eof())
    {
        infile >> acc;
        data.insert(pair<int, account>(acc.getaccno(), acc));
    }
    account::setaccno(acc.getaccno());

    infile.close();
}
account bank::openaccount(string name, int balance)
{
    ofstream ofs;
    account aks(name, balance);
    data.insert(pair<int, account>(aks.getaccno(), aks));
    ofs.open("bank.data", ios::trunc);
    map<int, account>::iterator itr;
    for (itr = data.begin(); itr != data.end(); itr++)
    {
        ofs << itr->second;
    }
    ofs.close();
    return aks;
}
account bank::balanceenquiry(int accno)
{
    map<int, account>::iterator itr;
    itr = data.find(accno);
    return itr->second;

}
account bank::deposite(int accno, int amount)
{
    map<int, account>::iterator itr;
    itr = data.find(accno);
    itr->second.deposite(amount);
    return itr->second;

}
account bank::withdrawal(int accno, int amount)
{
    map<int, account>::iterator itr;

    itr = data.find(accno);
    itr->second.withdraw(amount);
    return itr->second;

}
void bank::closeacc(int accno)
{
    map<int, account>::iterator itr;

    itr = data.find(accno);
    cout << "account deleted sucefully" << itr->second;
    data.erase(accno);

}
void bank::showall()
{
    map<int, account>::iterator itr;
    for (itr = data.begin(); itr != data.end(); itr++)
    {
        cout << itr->second << endl;
    }
}
bank::~bank()
{
    ofstream outfile;
    outfile.open("bank.data", ios::trunc);
    map<int, account>::iterator itr;
    for (itr = data.begin(); itr != data.end(); itr++)
    {
        outfile << itr->second;
    }
    outfile.close();
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
