// Task 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

int charToNumber(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return (ch - 'a') + 10;;
    }

    if (ch >= 'A' && ch <= 'Z') {
        return (ch - 'A') + 10;
    }

    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    }


}

unsigned strLen(const char* str) {
    if (!str) {
        return 0;
    }

    unsigned length = 0;
    while (*str) {
        length++;
        str++;
    }

    return length;
}

int myPow(int number, int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= number;
    }

    return result;
}

int numberInKCsToDecimal(const char* number, int base) {
    if (!number) {
        return 0;
    }

    int length = strLen(number);
    int result = 0;
    int power = 1;
    const char* numberCopy = number + (length - 1);

    while (*numberCopy >= *number) {
        int digit = charToNumber(*numberCopy);

        result += digit * power;
        power *= base;
        numberCopy--;
    }

   

    return result;

}



int main()
{

    char buffer[MAX_SIZE];
    cin.getline(buffer, MAX_SIZE);

    int base;

    cin >> base;

    int result = numberInKCsToDecimal(buffer, base);

    cout << result;
    
}

