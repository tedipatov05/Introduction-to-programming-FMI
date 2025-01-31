// Counting_Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

constexpr int CHARACTERS_COUNT = 256;

void stableCountingSort(char* arr, size_t length);
void unstableCountingSort(char* arr, size_t length);

int main()
{
	char arr[] = "ababababababa";
	unstableCountingSort(arr, 13);
	std::cout << arr;
}

void stableCountingSort(char* arr, size_t length) {

    size_t arrLength = strlen(arr);
	char* copy = new char[arrLength];

    // copy original
	for (size_t i = 0; i < arrLength; i++) {
		copy[i] = arr[i];
	}

	int counter[256] = { 0 };
	for (size_t i = 0; i < arrLength; i++) {
		counter[arr[i]]++;
	}

	// the counter will become the index where the next element will be placed
	for (size_t i = 1; i < 256; i++)
	{
		counter[i] += counter[i - 1];
	}

	for (int i = arrLength - 1; i >=0; i--)
	{
		// counter[arr[i]] - 1 is the index where the element should be placed
		arr[counter[copy[i]] - 1] = copy[i];

		// the next element of this type should be place one index behind this one 
		--counter[copy[i]];
	}

	delete[] copy;

}

void unstableCountingSort(char* arr, size_t length) {
	size_t arrLength = strlen(arr);
	int counter[CHARACTERS_COUNT] = { 0 };
	// count every char
	for (size_t i = 0; i < length; i++) {
		counter[arr[i]]++;
	}

	size_t index = 0;
	for (size_t i = 0; i < CHARACTERS_COUNT; i++) {
		while (counter[i] != 0) {
			arr[index++] = i;
			counter[i]--;
		}
	}
}
