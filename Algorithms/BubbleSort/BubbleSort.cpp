// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


void bubbleSort(int* arr, size_t length) {
	for (size_t i = 0; i < length - 1; i++) {
		for (size_t j = 0; j < length - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void optimizedBubbleSort(int* arr, size_t length) {
	int lastSwappedIndex = length - 1;
	for (size_t i = 0; i < length; i++) {
		int currentSwappedIndex = -1;
		for (size_t j = 0; j < lastSwappedIndex; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				currentSwappedIndex = j;
			}
		}

		if (currentSwappedIndex == -1) {
			return;
		}

		lastSwappedIndex = currentSwappedIndex;
	}
}
