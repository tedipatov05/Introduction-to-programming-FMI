// Task 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int sum_array(const int* arr, int size) {

    if (size == 1)
    {
        return *arr;
    }

    return *arr + sum_array(arr + 1, size-1);

}

int main()
{
    int* arr = new int[] {1, 2, 3, 4, 5};
    int res = sum_array(arr, 5);
    cout << res;
}

