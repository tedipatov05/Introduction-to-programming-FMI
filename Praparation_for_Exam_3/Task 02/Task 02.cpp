// Task 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int findIndex(const int arr[], size_t L) {
	int currentCount = 0;

	for (int i = 0; i < L; i++){
		int currentNum = arr[i];

		for (int j = 0; j < L; j++){
			if (arr[j] >= currentNum)
			{
				currentCount++;
			}
			
		}

		if (currentNum == currentCount){
			return i;
		}

		currentCount = 0;

	}

	return -1;
}

void selectionSort(int* arr, size_t L) { // 8 5 9 15 0
	for (int i = 0; i < L; ++i) {
		int maxIndex = i;
		for (int j = i + 1; j < L; ++j) {
			if (arr[j] > arr[maxIndex]) {
				maxIndex = j;
			}
		}

		if (maxIndex != i) {
			swap(arr[maxIndex], arr[i]);
		}
	}
}

int findIndex_new(const int arr[], size_t L) {
	int* sortedArr = new int[L];
	for (int i = 0; i < L; ++i) {
		sortedArr[i] = arr[i];
	}

	selectionSort(sortedArr, L);

	int currentSize = 0;
	int* ptrToDelete = sortedArr;

	while (currentSize < L && *sortedArr > currentSize) {
		++currentSize;
		sortedArr++;
	}

	delete[] ptrToDelete;
	return currentSize;
}

int main()
{
	int arr[10] = { 100, 1000, 400, 900, 1100, 400, 800, 1000, 400, 800 };

	cout << findIndex_new(arr, 10) << endl;
}
