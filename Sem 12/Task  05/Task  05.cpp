

#include <iostream>
using namespace std;

bool binary_search_rec(int* arr, int size, int target) {

	int mid = size / 2;

	if (target == arr[mid])
	{
		return true;
	}

	if (size <= 0)
	{
		return false;
	}

	if (target > arr[mid]) {

		arr += mid + 1;
		return binary_search_rec(arr, size - mid - 1, target);
	}

	return binary_search_rec(arr, mid, target);

}

size_t fact(size_t n)
{
	if (n == 0)
	{
		return 1;
	}

	return n * fact(n--);
}


int main()
{
	//int* arr = new int[] { 1, 2, 3, 4, 5, 6 };
	//printArr(arr, 6);


	//cout << res;

	cout << fact(5);
}

