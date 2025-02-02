// Task 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int charToDigit(char ch) {
	return ch - '0';
}

bool isDigit(char ch) {
	return ch >= '0' && ch <= '9';
}

int analyzeArray(const char* str) {

	if (!str) {
		return -1;
	}

	int digitCount[10] = { 0 };
	while (*str) {
		if (isDigit(*str)) {
			digitCount[charToDigit(*str)]++;
		}
		str++;
	}

	int max = -1;
	for (int i = 0; i < 10; i++) {

		if (digitCount[i] == 0) {
			max = i;
		}
	}

	return max;
}

int main()
{
	std::cout << "Hello World!\n";
}

