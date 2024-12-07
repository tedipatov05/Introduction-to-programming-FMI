// Task 07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


bool checkBit(unsigned int n, unsigned int k) {
    int mask = 1;

    mask <<= k;

    return (n & mask) == mask;
}

unsigned int clearBit(unsigned int n, unsigned int k) {

    // 011110
    // &
    // 110111


    unsigned int mask = 1;

    mask <<= k;

    mask = ~mask;

    return n & mask;
}

int clearRightOne(unsigned number) {
    if (number == 0) {
        return 0;
    }

    for (int i = 0; i < 32; i++) {
        if (checkBit(number, i)) {
            return clearBit(number, i);
        }
    }
}

int main()
{
    
    unsigned n;

    cin >> n;

    cout << clearRightOne(n);
    
}

