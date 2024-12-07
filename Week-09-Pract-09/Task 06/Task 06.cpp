// Task 06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool checkBit(unsigned int n, unsigned int k) {
    int mask = 1;

    mask <<= k;

    return (n & mask) == mask;
}




int uncodeNum(unsigned int number, unsigned k) {

    int result = 0;

    for (int i = 0; i < k; i++) {
        result *= 2;
        result += checkBit(number, i);
    }

    return result;


}

int main()
{
    unsigned n, k;
    cin >> n >> k;

    cout << uncodeNum(n, k) << endl;
}

