// Task 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr int BUFFER_SIZE = 100;

void insertSymbol(const char* text, char* result, char symbol, unsigned int idx) {
    /*const char* ptr = text; 
    char* resPtr = result; */ 

    for (unsigned int i = 0; i < idx; i++) {
        *result++ = *text++;
    }

    *result++ = symbol;

    while (*text) {
        *result++ = *text++;
    }

    *result = '\0';
}

int main()
{
	
	char buffer[BUFFER_SIZE];

	cin.getline(buffer, BUFFER_SIZE);

	char symbolToInsert;
	cin >> symbolToInsert;

	int idx;
	cin >> idx;

	char bufferResult [BUFFER_SIZE] ;

	insertSymbol(buffer, bufferResult, symbolToInsert, idx);

	cout << bufferResult << endl;

}
