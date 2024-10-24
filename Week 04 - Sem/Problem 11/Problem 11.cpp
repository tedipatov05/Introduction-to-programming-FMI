// Problem 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


char smallToBigCharacter(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return (char)(ch - ('a' - 'A'));
    }
    else {
        return ch;
    }
}


int main()
{
    char ch;

    cin >> ch;

    char result = smallToBigCharacter(ch);

    cout << result << endl;
    
}

