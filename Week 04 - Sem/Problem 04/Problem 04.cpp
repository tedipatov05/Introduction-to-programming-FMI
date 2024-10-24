// Problem 04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isSuffix(int n, int k) {
    if (k > n) {
        return false;
    }

    while (k > 0) {
        if (n % 10 != k % 10) {
            return false; 
        }
        n /= 10; 
        k /= 10; 
    }

    return true; 
}

int main()
{
    int number;
    int suffix;

    cin >> number >> suffix;

    cout << boolalpha << isSuffix(number, suffix) << endl;
}

