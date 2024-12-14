// Task 05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

int myPow(int number, int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= 10;
    }

    return result;
}

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

int charToDigit(char ch) {
    return ch - '0';
}

int covertStringToNumber(const char * str) {
    int result = 0;
    int power = 0;

    while (*str) {
        if (!isDigit(*str)) {
            return 0;
        }
        result *= 10;
        result += charToDigit(*str);

        power++;
        str++;


    }

    return result;
}


int main()
{
    char number1Str[MAX_SIZE];

    cin.getline(number1Str, MAX_SIZE);

    char number2Str[MAX_SIZE];
    cin.getline(number2Str, MAX_SIZE);

    int number1 = covertStringToNumber(number1Str);
    int number2 = covertStringToNumber(number2Str);

    number1 > number2 ? cout << "number1" : cout << "number2";

}

