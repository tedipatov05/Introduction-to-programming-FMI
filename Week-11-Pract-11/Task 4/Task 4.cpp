// Task 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

unsigned strLen(const char* str) {
    if (!str) {
        return 0;

    }

    unsigned count = 0;
    while (*str) {
        count++;
        str++;
    }

    return count;
}

int containsStringCount(const char* str1, const char* str2) {
    if (!str1 || !str2) {
        return 0;
    }

    int count = 0; 
    int str1Length = strLen(str1);
    int str2Length = strLen(str2);

    //int minLength = str1Length <= str2Length ? str1Length : str2Length;

    for (int i = 0; i <= str1Length - str2Length; i++) {
        bool match = true;
        for (int j = 0; j < str2Length; j++) {
            if (str1[i + j] != str2[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            count++;
        }
    }

    return count;
    
}

int main()
{
    char buffer[MAX_SIZE];

    cin.getline(buffer, MAX_SIZE);

    char buffer2[MAX_SIZE];
    cin.getline(buffer2, MAX_SIZE);

    int count = containsStringCount(buffer, buffer2);

    cout << count;
}

