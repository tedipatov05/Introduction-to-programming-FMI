// Problem 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int a1 = number % 10; 
    int a2 = (number / 10) % 10;
    int a3 = (number / 100) % 10;
    int a4 = number / 1000;

    bool isPalidrome = a1 == a4 && a2 == a3;

    cout << boolalpha << isPalidrome << endl;
}

