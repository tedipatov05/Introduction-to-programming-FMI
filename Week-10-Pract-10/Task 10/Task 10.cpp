// Task 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int at(const int* arr, unsigned int idx) {
    int currIdx = 0;
    while (currIdx != idx) {
        arr++;
        currIdx++;
    }

    return *arr;
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8 };
    int index = 3;

    cout << at(arr, index) << endl;
}

