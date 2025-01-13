// Task 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void insertAt(int*& arr, size_t len, int index, int elem) {
	int* newArr = new int[len + 1];

	for (int i = 0; i < len + 1; i++) {
		if (i < index) {
			newArr[i] = arr[i];
		}
		else if (i == index) {
			newArr[i] = elem;
		}
		else {
			newArr[i] = arr[i - 1];
		}
	}

	delete[] arr;
	arr = newArr;



}

void removeAt(int*& arr, size_t len, int index) {
	int* newArr = new int[len - 1];

	for (int i = 0; i < len; i++) {
		if (i < index) {
			newArr[i] = arr[i];
		}
		else if (i == index) {
			continue;
		}
		else {
			newArr[i - 1] = arr[i];
		}
	}

	delete[] arr;
	arr = newArr;


}

void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int* arr = new int[6] {1, 2, 3, 4, 5, 6};

	insertAt(arr, 6, 6, 7);
	printArr(arr, 7);
	removeAt(arr, 6, 3);

	printArr(arr, 5);

	delete[] arr;



}
