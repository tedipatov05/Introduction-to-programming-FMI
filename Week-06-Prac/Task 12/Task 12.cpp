// Task 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void print(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    constexpr int ARRAY_LENGTH = 5;
    int arr[ARRAY_LENGTH];

    for (int i = 0; i < ARRAY_LENGTH; i++) {
        cin >> arr[i];
    }

    for (int j = ARRAY_LENGTH - 1; j > 0; j--) {
        //int result = arr[j] + 1;

        if ((arr[j] + 1 < 10 && j == ARRAY_LENGTH - 1) ) {
            arr[ARRAY_LENGTH - 1] += 1;
            break;
        }
        if ((arr[j] < 10 && j != ARRAY_LENGTH - 1)) {
            break;
        }

        arr[j - 1] += (arr[j] + 1) / 10;

        if (j != ARRAY_LENGTH - 1) {
            arr[j] = arr[j] % 10;

        }
        else {
            arr[j] = (arr[j] + 1) % 10;
        }



    }

    print(arr, ARRAY_LENGTH);

    return 0;
}

