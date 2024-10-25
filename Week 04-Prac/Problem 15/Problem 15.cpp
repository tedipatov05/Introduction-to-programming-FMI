// Problem 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned int sortDigits(unsigned int number) {
    unsigned int sortedNumber = 0;

    while (number > 0) {
        unsigned int maxDigit = 0;
        unsigned int tempNumber = number;
        unsigned int newNumber = 0;
        unsigned int newMultiplier = 1;

        while (tempNumber > 0) {
            unsigned int digit = tempNumber % 10;
            tempNumber /= 10;
            if (digit >= maxDigit) {
                maxDigit = digit;
            }
        }

        tempNumber = number;
        while (tempNumber > 0) {
            unsigned int digit = tempNumber % 10;
            tempNumber /= 10;
            if (digit != maxDigit) {
                newNumber += digit * newMultiplier;
                newMultiplier *= 10;
            }
        }

        sortedNumber = sortedNumber * 10 + maxDigit;
        number = newNumber;
    }

    return sortedNumber;
}


int main()
{
    cout << sortDigits(4791257) << endl;
}

