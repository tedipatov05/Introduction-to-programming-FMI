// Task 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int* concatArrays(int* arr, size_t arrLen, int* arr2, size_t arr2Len);

int main()
{
	int arr[] = { 1, 21, 72, 74, 75 };
	int arr2[] = { 12, 13, 18,19, 20 };

	int* result = concatArrays(arr, 5, arr2, 5);
	for (int i = 0; i < 10; i++)
	{
		std::cout << result[i] << " ";
	}

	delete[] result;
}

int* concatArrays(int* arr, size_t arrLen, int* arr2, size_t arr2Len) {

	int* result = new int[arrLen + arr2Len];
	int arrIdx = 0;
	int arr2Idx = 0;
	int resIdx = 0;

	while (arrIdx < arrLen && arr2Idx < arr2Len)
	{
		if (arr[arrIdx] <= arr2[arr2Idx])
		{
			result[resIdx] = arr[arrIdx];
			arrIdx++;
		}
		else
		{
			result[resIdx] = arr2[arr2Idx];
			arr2Idx++;
		}
		resIdx++;
	}

	while (arrIdx < arrLen)
	{
		result[resIdx] = arr[arrIdx];
		arrIdx++;
		resIdx++;
	}

	while (arr2Idx < arr2Len)
	{
		result[resIdx] = arr2[arr2Idx];
		arr2Idx++;
		resIdx++;	
	}


	return result;

}