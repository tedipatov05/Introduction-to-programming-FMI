// Task 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

bool isEven(unsigned number) {

    int mask = 1; 

    return !(number & mask);
}


int main()
{
    unsigned number;

    cin >> number;

    bool result = isEven(number);

    cout << boolalpha << result;

}

