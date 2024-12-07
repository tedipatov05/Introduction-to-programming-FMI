// Task 08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool checkBit(unsigned int n, unsigned int k) {
    int mask = 1;

    mask <<= k;

    return (n & mask) == mask;
}

unsigned int bitwisePow(unsigned int base, unsigned int exp) {
    unsigned int result = 1; // Initialize result to 1

    while (exp > 0) {
        if (exp & 1) {
            result *= base;
        }

        base *= base;
        exp >>= 1; 
    }

    return result;
}


unsigned findNumber(unsigned x, unsigned m, unsigned n) {

    int result = 0;
    //int mask = 1 << m;
    while (n > 0) {
        int bit = checkBit(x, m);
        result += bit * bitwisePow(2, --n);
        m--;
    }

    return result;


}


int main()
{
    int x, m, n;

    cin >> x >> m >> n;
    cout << findNumber(x, m, n);
}
