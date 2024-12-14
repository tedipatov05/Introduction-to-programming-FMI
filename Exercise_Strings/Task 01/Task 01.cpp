// Task 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

unsigned strLen(const char* str) {
	unsigned count = 0;

	while (*str) {
		count++;
		str++;
	}

	return count;
}

bool isPalindrome(const char* str) {
	int length = strLen(str);

	for (int i = 0; i < length / 2; i++) {
		if (str[i] != str[length - i - 1]) {
			return false;
		}
	}

	return true;

}

int main()
{
	char buffer[MAX_SIZE];

	cin.getline(buffer, MAX_SIZE);

	cout << boolalpha << isPalindrome(buffer) << endl;
   
}

