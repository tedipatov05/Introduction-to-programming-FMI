// Problem 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    double a, b, c;

    cin >> a >> b >> c;

    bool isExists = (a + b) > c && (a + c) > b && (c + b) > a;

    if (isExists) {
        cout << "This triangle exists." << endl;

    }
    else {
        cout << "This triangle does not exist." << endl;
    }
}

