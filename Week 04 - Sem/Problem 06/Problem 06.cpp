// Problem 06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

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


bool isInfix(int number, int k) {
    while (number != 0) {
        if (isSuffix(number, k)) {
            return true;
        }
        number /= 10;
    }

    return false;
}

int main()
{
    std::cout << "Hello World!\n";
}

