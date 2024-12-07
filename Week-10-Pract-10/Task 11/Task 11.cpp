// Task 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


bool isPalindrome(const char* str) {
    if (!str) {
        return false;
    }

    int length = myStrLen(str);
    int operations = length / 2;
    int index = 0;
    const char* last = str + (length-1);
    while (index != operations) {
        if (*str == *last) {
            index++;
            str++;
            last--;
        }
        else {
            return false;
        }
           
    }

    return true;

}

int main()
{
    char buffer[SIZE];

    cin.getline(buffer, SIZE);

    cout << boolalpha << isPalindrome(buffer) << endl;
}

