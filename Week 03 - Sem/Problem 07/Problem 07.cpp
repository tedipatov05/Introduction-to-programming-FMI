// Problem 07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number;

    cin >> number;

    while (number % 2 == 0) {
        cout << 2 << " ";
        number /= 2;
    }

    for (int i = number; i >= 3; i-=2) {
        while (number % i == 0) {
            cout << i << " ";
            number /= i;
        }
    }

    if (number > 2) {
        cout << number << endl;
    }
}
