// Problem 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int reverseNumber(int number) {
    int reversedNumber = 0;
    while (number != 0) {
        reversedNumber *= 10;
        reversedNumber += number % 10;
        number /= 10;
    }

    return reversedNumber;
}

int main()
{
    int number; 

    cin >> number;

    cout << reverseNumber(number) << endl;
}

