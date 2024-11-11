// Task 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isSubarray(int arr1[], int arr1Length, int arr2[], int arr2Length) {

	if (arr2Length == 0) {
		return true;
	}

	if (arr2Length > arr1Length) {
		return false;
	}
		
	for (int i = 0; i <= arr1Length - arr2Length; i++) {
		bool isSubArray = true;

		for (int j = 0; j < arr2Length; j++) {
			if (arr1[i + j] != arr2[j]) {
				isSubArray = false;
				break;
			}
		}

		if (isSubArray) {
			return true;
		}
	}

	return false;
}

int main()
{
	int arr1[] = { 1,2,3,4 };
	int arr2[] = { 1,2,3 };

	bool isSubArray = isSubarray(arr1, 4, arr2, 3);

	cout << boolalpha << isSubArray;
}

