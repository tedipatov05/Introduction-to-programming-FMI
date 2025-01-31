// Task 05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned strLen(char* str){
	if (!str) {
		return 0;
	}

	unsigned counter = 0;

	while (*str)
	{
		counter++;
		str++;
	}

	return counter;
}

bool doesExists(char* symbols, char* word){
	if (!symbols || !word) {
		return false;
	}

	unsigned wordLen = strLen(word);

	while (*symbols)
	{
		int countSymbols = 0;
		while (*word)
		{
			if (*symbols != *word)
			{
				break;
			}
			countSymbols++;

			word++;
			symbols++;
		}

		/*word -= wordLen;
		symbols -= (wordLen-1);*/

		if (countSymbols == wordLen)
		{
			return true;
		}

		symbols++;

	}



}

int main()
{
	char symbols[] = "Hello, World!";
	char word[] = "ello,";
	cout << boolalpha << doesExists(symbols, word) << endl;
}

