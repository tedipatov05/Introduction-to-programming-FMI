// Problem 06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number;

    cin >> number;

    if (number >= 0) {
        cout << (number % 2 == 0) << endl;
    }
    else {
        cout << (number < -5) << endl;
    }
}

