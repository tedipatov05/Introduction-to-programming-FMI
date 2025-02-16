// PowerOfTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

unsigned powerOfTwo(unsigned power) {
    // 2^31 is the maximum power of two that can be represented as an unsigned int
    if (power > 31) {
        return 0;
    }

    // 1 << n is equivalent to 2^n
    return 1 << power;
}

int main()
{
    std::cout << "Hello World!\n";
}

