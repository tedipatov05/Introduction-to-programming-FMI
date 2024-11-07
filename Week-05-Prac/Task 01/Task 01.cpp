// Task 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap(int &num1, int &num2) {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

int main()
{
    int num1, num2;

    cin >> num1 >> num2;

    swap(num1, num2);

    cout << num1 << " " << num2;
}

