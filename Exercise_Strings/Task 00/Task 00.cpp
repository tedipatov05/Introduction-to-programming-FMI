// Task 00.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned myStrLen(char* ch) {
	if (!ch) {
		return 0;
	}

	unsigned length = 0;
	while (*ch) {
		length++;
		ch++;
	}

	return length;
}

void myStrCopy(const char* source, char* destination) {
	if (!source || !destination) {
		return;
	}

	while (*source) {
		*destination = *source;
		destination++;
		source++;
	}

	*destination = '\0';
}

void myStrCat(char* destination, const char* source) {
	if (!destination || !source) {
		return;
	}

	// we assume there is enough space in destination
	unsigned length = myStrLen(destination);
	destination += length;
	myStrCopy(source, destination);
}

int main()
{
	
	int a = 10;
	int* pa = &a;

	cout << a << endl;

	*pa = 12;

	cout << a << endl;
	
}

