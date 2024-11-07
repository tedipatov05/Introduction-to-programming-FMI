// Task 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printArr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    const int ARRAY_SIZE = 7;

    int arr[] = { 1,2,3,4,5,6, 7 };

    // << arr;

    for (int i = 0; i < ARRAY_SIZE/2; i++) {
        int temp = arr[ARRAY_SIZE - 1 - i];
        arr[ARRAY_SIZE - 1 - i] = arr[i];
        arr[i] = temp;
    }

    printArr(arr, ARRAY_SIZE);


}

