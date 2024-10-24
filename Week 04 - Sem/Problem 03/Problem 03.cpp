// Problem 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isPalindrome(int number) {
    int reversedNumber = 0;
    int original = number;
    while (number != 0) {
        reversedNumber *= 10;
        reversedNumber += number % 10;
        number /= 10;
    }

    return reversedNumber == original;
}

int main()
{
    int number;

    cin >> number;

    cout << boolalpha << isPalindrome(number) << endl;
}

