// Task 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int SIZE = 100;

unsigned int myStrLen(const char* str) {
    if (!str) {
        return 0;
    }

    int length = 0;
    while (*str) {
        str++;
        length++;
    }

    return length;
}


int main()
{
    char buffer[SIZE];
    cin.getline(buffer, SIZE);

    cout << myStrLen(buffer) << endl;
}

