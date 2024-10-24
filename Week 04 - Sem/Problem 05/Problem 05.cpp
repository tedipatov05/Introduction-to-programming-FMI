// Problem 05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isPrefix(int n, int k) {
    return isSuffix(reverseNumber(n), reverseNumber(k));

}

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


}

