// Task 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

void longestCommonPrefix(const char* word1, const char* word2, const char* word3, char* result) {

    if (!word1 || !word2 || !word3) {
        return;
    }

    int resInd = 0;

    while (*word1 && *word2 && *word3) {
        if (*word1 == *word2 && *word2 == *word3) {
            result[resInd++] = *word1;
        }
        else {
            break;
        }

        word1++; 
        word2++;
        word3++;
    }

    result[resInd] = '\0';

}


int main()
{
    char word1[MAX_SIZE];

    cin.getline(word1, MAX_SIZE);

    char word2[MAX_SIZE];

    cin.getline(word2, MAX_SIZE);

    char word3[MAX_SIZE];

    cin.getline(word3, MAX_SIZE);

    char result[MAX_SIZE];

    longestCommonPrefix(word1, word2, word3, result);

    cout << result;
   
}

