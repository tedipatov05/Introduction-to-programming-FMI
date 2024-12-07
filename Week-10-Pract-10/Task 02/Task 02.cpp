// Task 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int SIZE = 100;

void myStrCopy(char* dest, const char* src) {
    if (!dest || !src) {
        return;
    }

    while (!*src) {
        *dest = *src;
        dest++;
        src++;

    }
    *dest = '/0';
}


int myStrCmp(const char* first, const char* second) {
    if (!first || !second) {
        return 0;
    }

    while (*first && *second && (*first == *second)) {
        first++;
        second++;
    }

    return (*first - *second);
}

unsigned int atoa(const char* str) {

    if (!str) {
        return 0;
    }
    unsigned int number = 0;

    while (*str) {
        if (*str >= '0' && *str <= '9') {
            number *= 10;
            number += *str - '0';
            str++;
        }
        else {
            return 0;
        }
    }

    return number;
}

unsigned int getCharOccurrencesCount(const char* str, char ch) {
    int occurrences = 0;

    if (!str) {
        return 0;
    }

    while (*str) {
        if (*str == ch) {
            occurrences++;
        }
    }

    return occurrences;
}

bool isPrefix(const char* pattern, const char* text) {
    if (!pattern || !text) {
        return false;
    }

    while (*pattern) {
        if (*pattern == *text) {
            pattern++;
            text++;
        }
        else {
            return false;
        }
    }

    return true;
}

bool searchInText(const char* text, const char* pattern) {
    if (!text || !pattern) {
        return false;
    }

    while (*pattern) {

        if (isPrefix(text, pattern)) {
            return true;
        }

        pattern++;

    }

    return false;
}


int main()
{
    char source[SIZE] = "is true Text";

    char prefix[] = "true";
    //char dest[SIZE];

    ////cin.getline(source, SIZE);

    //myStrCopy(dest, source);

    //cout << dest;

    cout << boolalpha << searchInText(prefix, source) << endl;
}

