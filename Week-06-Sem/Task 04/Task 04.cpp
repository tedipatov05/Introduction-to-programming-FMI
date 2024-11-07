// Task 04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void selectionSort(int arr[], int length) {
    for (int i = 0; i < length-1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

void swap(int& a, int& b) {
    int temp = b;
    b = a;
    a = temp;
}

void printArr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}


int main()
{

    
    int arr[] = { 4,1,56,7,3,2 };

    int arrLength = 6;

    selectionSort(arr, arrLength);

    printArr(arr, arrLength);
    
}

