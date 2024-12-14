// Task 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isNumOrSymbol(char ch) {
	return ch > 33;
}


unsigned int getWordsCount(const char* words) {

	unsigned wordsCount = 0;
	if (!words) {
		return wordsCount;
	}

	bool isInWord = false;

	while (*words) {
		if (isNumOrSymbol(*words) ) {
			if (!isInWord) {
				isInWord = true;
				wordsCount++;
			}
			
		}
		else {
			isInWord = false;
		}

		words++;
	}

	return wordsCount;
}

int main()
{
	char words[] = "Me? Why always me?";
	int wordsCount = getWordsCount(words);

	cout << wordsCount;

}
