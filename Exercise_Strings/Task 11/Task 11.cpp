// Task 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


bool checkIsCharacter(char ch) {
    return (ch > 'a' && ch < 'z') || (ch > 'A' && ch < 'Z');
}

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}


void sortCharacters(const char* str, char* result) {
   

    int index = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (checkIsCharacter(str[i])) {
            result[index++] = tolower(str[i]); 
        }
    }
    result[index] = '\0'; 

    
    for (int i = 0; i < index - 1; ++i) {
        for (int j = 0; j < index - i - 1; ++j) {
            if (result[j] > result[j + 1]) {
                char temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }
}

int main()
{
    char buffer[] = "Hello world!";

    char bufferRes[1024];

    sortCharacters(buffer, bufferRes);

    cout << bufferRes;

}

