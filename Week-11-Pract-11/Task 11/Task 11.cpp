// Task 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

char toUpper(char ch) {
	if (ch >= 'a' && ch <= 'z') {
		return ch - ('a' - 'A');
	}

	return ch;
}

bool isSymbol(char ch) {
	return ch > ' ';
}

void changeAllWordsToStratWithUpper(char* str) {
	if (!str) {
		return;
	}

	bool isInWord = false;

	while (*str) {
		if (!isInWord && isSymbol(*str)) {
			*str = toUpper(*str);

		}
		if (!isSymbol(*str)) {
			isInWord = false;
		}
		else {
			isInWord = true;
		}

		str++;
	}

	
}

int main()
{
	char buffer[] = "i will ace the exam tomorrow";
	cout << buffer << endl;

	changeAllWordsToStratWithUpper(buffer);

	cout << buffer << endl;

}

