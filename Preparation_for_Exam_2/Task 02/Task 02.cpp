// Task 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

char toUpper(char ch) {
	if (ch >= 'a' && ch<='z'){
		return ch - ('a' - 'A');
	}

	return ch;
}

char toLower(char ch) {
	if (ch >= 'A' && ch <= 'Z') {
		return ch + ('a' - 'A');
	}

	return ch;
}

void revert(char* str)
{
	if (!str)
	{
		return;
	}

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = toUpper(*str);
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			*str = toLower(*str);
		}
		str++;
	}
	
}

int main()
{
	char* str = new char[6] { 'a', 'B', 'c', 'D', 'e' };
	revert(str);
	cout << str << endl;
}

