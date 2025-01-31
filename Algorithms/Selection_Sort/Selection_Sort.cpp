// Selection_Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void selection_Sort(int* arr, size_t length);

int main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	selection_Sort(arr, 5);

	for (size_t i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void selection_Sort(int* arr, size_t length) {
	for (size_t i = 0; i < length; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < length; j++) {

			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}

		if (minIndex != i){
			swap(arr[i], arr[minIndex]);
		}
	}
}

