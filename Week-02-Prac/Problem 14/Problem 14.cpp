// Problem 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cin >> num1 >> operation >> num2;

    switch (operation) {
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '+':
            cout << num1 + num2 << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
            break;


    }
}

