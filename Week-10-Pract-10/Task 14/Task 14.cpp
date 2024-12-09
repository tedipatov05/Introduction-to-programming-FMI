// Task 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr int ARR_SIZE = 10;
constexpr int BUFFER_SIZE = 100;

void initializeArray(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		arr[i] = 0;
	}
}

int charToDigit(char ch) {
	return ch - '0';
}

void getDigitOccurrences(const char* digits, char* result) {
	if (!digits) {
		return;
	}
	
	int count[ARR_SIZE];
	initializeArray(count, ARR_SIZE);

	while (*digits) {
		int digit = charToDigit(*digits);
		count[digit]++;
		digits++;
	}

	
	bool first = true; 

	for (int i = 0; i < ARR_SIZE; ++i) {
		if (count[i] > 0) {
			if (!first) {
				*result++ = ',';
			}
			first = false;

			
			int n = count[i];
			if (n > 9) {
				*result++ = (n / 10) + '0';
			}
			*result++ = (n % 10) + '0';

			*result++ = 'x';

			
			*result++ = i + '0';
		}
	}

	
}

int main()
{
	char buffer[BUFFER_SIZE];

	cin.getline(buffer, BUFFER_SIZE);

	char result[BUFFER_SIZE] = { '0' };
	getDigitOccurrences(buffer, result);
	cout << result;
}

