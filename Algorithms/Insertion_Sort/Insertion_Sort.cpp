// Insertion_Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void insertionSort(int* arr, size_t length);

int main()
{
    
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
