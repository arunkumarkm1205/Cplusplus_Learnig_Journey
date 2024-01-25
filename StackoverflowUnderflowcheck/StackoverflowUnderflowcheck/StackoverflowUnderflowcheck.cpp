// StackoverflowUnderflowcheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class stackoverflow:exception{};
class stackunderflow:exception{};

class stack
{
private:
	int* stk;
	int top = -1;
	int size;
public:
	stack(int sz)
	{
		size = sz;
		stk = new int[size];
	}
	void push(int x)throw(stackoverflow)
	{
		try
		{
			if (top == size - 1)
				throw stackoverflow();
			top++;
			stk[top] = x;
		}
		catch (stackoverflow e)
		{
			cout << "STACKOVERFLOW\n";
		}
	}
	int pop()throw(stackunderflow)
	{
		try
		{
			if (top == -1)
				throw stackunderflow();
			return stk[top--];
		}
		catch (stackunderflow e)
		{
			cout << "STACKUNDERFLOW\n";
		}
	}

	
	
};
int main()
{
	stack s(3);
	/*s.push(1);
	s.push(2);
	s.push(3);
	s.push(1);*/
	cout<<s.pop();
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
