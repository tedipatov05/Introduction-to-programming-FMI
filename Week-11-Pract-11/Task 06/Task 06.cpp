// Task 06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

unsigned strLen(const char* ch) {
    unsigned length = 0;
    while (*ch) {
        length++;
        ch++;
    }

    return length;
}

void substring(char* str, int start, int end, char* result) {

    if (!str) {
        return;
    }

    int currInd = 0;
    int strLength = strLen(str);

    
    int resultInd = 0;

    if (start > end || start < 0) {
        return;
    }
    if (end > strLength) {
        end = strLength;
    }

    while (*str) {
        if (currInd >= start) {
            result[resultInd] = *str;
            resultInd++;
        }
        if (currInd == end) {
            break;
        }

        currInd++;
        str++;

    }

    result[resultInd] = '\0';

    //return result;

    
}



int main()
{
    char result[MAX_SIZE] = { ' ' };

    char buffer[MAX_SIZE];
    
    int start, end;

    cin.getline(buffer, MAX_SIZE);

    cin >> start >> end;

   substring(buffer, start, end, result);

    cout << result;





    
}

