// Task 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int countOnes(int num) {

	int count = 0;
	while (num != 0) {
		if (num & 1) {
			count++;
		}

		num >>= 1;
	}

	return count;
}

int* changeArray(int* arr, int size, int k, int& count) {
	count = countOnes(k);
	int* result = new int[count];
	int idx = 0;
	int i = 0;
	while (k) {
		if (k & 1) {
			result[idx] = arr[i];
			idx++;
		}

		k >>= 1;
		i++;
	}

	return result;
}

void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int k;
	cin >> k;

	int countOnes = 0;

	int* result = changeArray(arr, n, k, countOnes);

	delete[] arr;

	printArr(result, countOnes);

	delete[] result;



}

