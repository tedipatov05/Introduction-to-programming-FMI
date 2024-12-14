// Task 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;


char tolower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }

    return ch;
}

unsigned strLen(const char* str) {
    unsigned count = 0; 

    if (!str) {
        return 0;
    }

    while (*str) {
        count++;
        str++;
    }

    return count;
}


bool equalIgnoreCase(char a, char b) {
    return tolower(a) == tolower(b);
}

bool startsWithFromPos(const char* text, const char* substring, int pos) {
    if (!text || !substring) {
        return false;
    }

    int textLen = strLen(text);
    int substringLen = strLen(substring);

    if (pos + substringLen > textLen) {
        return false;
    }

    for (int i = 0; i < substringLen; i++) {
        if (!equalIgnoreCase(text[pos + i], substring[i])) {
            return false;
        }
    }

    return true;
}

void replaceSubstringWithStars(const char* text, const char* substring, char * result) {
    if (!text || !substring) {
        return;
    }

    int textLen = strLen(text);
    int substringLen = strLen(substring);
    int resultInd = 0;


    for (int i = 0; i < textLen; i++) {
        if (startsWithFromPos(text, substring, i)) {
            for (int j = 0; j < substringLen; j++) {
                result[resultInd++] = '*';
            }

            text += substringLen - 1;
        }
        else {
            result[resultInd++] = text[i];
        }
    }

}




int main()
{
    char buffer[MAX_SIZE];

    cin.getline(buffer, MAX_SIZE);

    char substring[MAX_SIZE];
    cin.getline(substring, MAX_SIZE);

    char result[MAX_SIZE];

    replaceSubstringWithStars(buffer, substring, result);

    cout << result;
}

