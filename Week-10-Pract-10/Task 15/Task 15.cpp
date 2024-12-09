// Task 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr int BUFFER_SIZE = 100;

bool isNumOrSymbol(char ch) {
	return ch > 33;
}

unsigned int getWordsCount(const char* words) {
	if (!words) {
		return 0;
	}

	unsigned int count = 0;
	bool inWord = false;

	while (*words) {

		if (isNumOrSymbol(*words)) {
			if (!inWord) {
				inWord = true;
				count++;
			}
		}
		else {
			inWord = false;

		}
		words++;
	}

	return count;
}

int main()
{
	char buffer[BUFFER_SIZE];

	cin.getline(buffer, BUFFER_SIZE);

	int countOfWords = getWordsCount(buffer);
	cout << countOfWords << endl;
}
