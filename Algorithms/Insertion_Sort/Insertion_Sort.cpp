// Insertion_Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void insertionSort(int* arr, size_t length);

int main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	insertionSort(arr, 5);

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << arr[i] << " ";
	}
}

void insertionSort(int* arr, size_t length) {
    for (int i = 1; i < length; i++) {
        int currentElement = arr[i];
        int currentIndex = i - 1;
        while (currentIndex >= 0 && arr[currentIndex] > currentElement) {
            arr[currentIndex + 1] = arr[currentIndex];
            currentIndex--;
        }

        arr[currentIndex + 1] = currentElement;
    }
}
