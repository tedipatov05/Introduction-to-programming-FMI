// Task 09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void replaceOccurrences(char* str, char x, char a, char b) {
    int occurrences = 0;
    if (!str) {
        return;
    }

    while (*str) {
        if (*str == x) {
            *str = occurrences++ % 2 ? b : a;
        }
        str++;
    }

}

int main()
{
    char str[] = "H_ll_ my fri_nd";
    char x = '_';
    char a = 'e';
    char b = 'o';

    replaceOccurrences(str, x, a, b);

    cout << str << endl;
}

