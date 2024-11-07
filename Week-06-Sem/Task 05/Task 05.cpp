// Task 05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int binarySearch(int arr[], int length, int searchItem) {

    int low = 0; 
    int high = length - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == searchItem) {
            return mid;

        }
        else if (arr[mid] < searchItem) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;


}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8 };

    int searchItem;

    cin >> searchItem;

    int result = binarySearch(arr, 8, searchItem);

    cout << result;
}

