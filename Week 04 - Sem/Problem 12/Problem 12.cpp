// Problem 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int charToDigit(char ch) {
	if (ch >= '0' && ch <= '9') {
		return ch - '0';
	}
	else {
		return -1;
	}
}

int main()
{
	char ch;

	cin >> ch;

	int result = charToDigit(ch);

	cout << result << endl;

}



