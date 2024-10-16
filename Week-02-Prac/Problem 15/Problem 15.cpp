// Problem 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number; 

    cin >> number;

    int a4 = number % 10;
    int a3 = (number / 10) % 10;
    int a2 = (number / 100) % 10;
    int a1 = number / 1000;

    int firstNum = a1 * 10 + a4;
    int secondNum = a2 * 10 + a3;

    if (firstNum < secondNum) {
        cout << "less (" << firstNum << "<" << secondNum << ")" << endl;
    }
    else if (firstNum > secondNum) {
        cout << "bigger (" << firstNum << ">" << secondNum << ")" << endl;
    }
    else {
        cout << "less (" << firstNum << "=" << secondNum << ")" << endl;
    }

}

