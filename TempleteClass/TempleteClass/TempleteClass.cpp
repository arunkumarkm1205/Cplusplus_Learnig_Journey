// TempleteClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
template<class T>
class stack {
private:
    T* stk;
    int top = -1;
    int size;

public:
    stack(int x)
    {
        size = x;
        stk = new T[size];
    }
    void push(T x);
    T pop();
        
};
template <class T>
void stack<T>::push(T x)
{
    if (top == size - 1)
        cout << "stack is full\n";
    else
    {
        top++;
        stk[top] = x;
    }
}
template <class T>
T stack<T>::pop()
{
    if (top == -1)
        cout << "stack is empty\n";
    else
        return stk[top--];
    
}
int main()
{
    stack<int> s(3);
    s.push(15);
    s.push(18);
    s.push(19);
    for (int i = 0; i < 3; i++)
        cout << s.pop() << endl;
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
