// Task 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isSmallSymbol(char ch) {
	return ch >= 'a' && ch <= 'z';
}
//
//bool isDigit(char ch) {
//	return ch >= '0' && ch <= '9';
//}

bool isBigSymbol(char ch) {
	return ch >= 'A' && ch <= 'Z';

}

void convertString(char* str) {
	if (!str) {
		return;
	}

	while (*str) {
		if (isBigSymbol(*str)) {
			*str += ('a' - 'A');
		}
		else if (isSmallSymbol(*str)) {
			*str -= ('a' - 'A');
		}

		str++;
	}
}

int main()
{
	char str[] = "abcd56ABCD";
	cout << str << endl;
	convertString(str);

	cout << str << endl;
}

