#include <iostream>
#include "ArrayStack.h"

using namespace std;

int main()
{
	/*
	ArrayStack<int> stack(50);
	int number;
	cout << "Input Num : ";
	cin >> number;
	while (number != 0)
	{
		int mok = number / 2;
		int nam = number % 2;
		stack.push(nam);
		number = mok;
	}
	while (!stack.isEmpty())
		cout << stack.pop();
	cout << endl;
	*/
	ArrayStack<char> rStack(50);

	char c;
	while (c = cin.get(), !cin.eof())
		rStack.push(c);

	while (!rStack.isEmpty())
		cout << rStack.pop();
	cout << endl;
}

