// Task 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned int setBit(unsigned int n, unsigned int k) {

    // 1010011
    // |
    // 0001000

    int mask = 1;
    mask <<= k;

    return n | mask;
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

unsigned int toggleBit(unsigned int n, unsigned int k) {
    // 010111
    // ^ 
    // 001000

    int mask = 1;

    mask <<= k;

    return n ^ k;
}

bool checkBit(unsigned int n, unsigned int k) {
    int mask = 1;

    mask <<= k;

    return (n & mask) == mask;
}






int main()
{
    
}

