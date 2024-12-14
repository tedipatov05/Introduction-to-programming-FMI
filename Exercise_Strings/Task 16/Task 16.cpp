// Task 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned strLen(char* str) {
    unsigned length = 0;

    while (*str) {
        length++;
        str++;
    }

    return length;
}

int charToNumber(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    }

    return -1;
}


int timeToNumber(char* ch) {
    return charToNumber(ch[1]) * 10 + charToNumber(ch[0]);
}

int checkTimeStr(char* str) {

    int length = strLen(str);
    if (length != 8) {
        return -1;
    }

    /*char temp[2];
    while (*str) {
        temp[1] = *str;
        str++;
        temp[2] = *str;
        str++;

    }*/
}

int main()
{
    std::cout << "Hello World!\n";
}

