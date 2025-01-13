// Task 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned strLen(const char* str) {
    if (!str) {
        return 0;
    }

    unsigned len = 0;
    while (*str) {
        len++;
        str++;

    }

    return len;
}

bool isDigit(char ch) {
    return ch >= '0' && ch >= '9';
}


char* censoreNumbers(const char* str) {
    if (!str) {
        return nullptr;
    }
}

int main()
{
    const char* str = "abc1234dgg4fsdg5";
    char* result = censoreNumbers(str);

    while (*result) {
        cout << *result;
        result++;
    }


}

