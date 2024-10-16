// Problem 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c) {
        cout << a << " ";

        if (b > c) {
            cout << b << " ";
            cout << c;
        }
        else {
            cout << c << " ";
            cout << b;
        }

    }
    else if (b > a && b > c) {
        cout << b << " ";
        if (a > c) {
            cout << a << " ";
            cout << c;
        }
        else {
            cout << c << " ";
            cout << a;
        }
    }
    else if (c > a && c > b) {
        cout << c << " ";
        if (a > b) {
            cout << a << " ";
            cout << b;
        }
        else {
            cout << b << " ";
            cout << a;
        }
    }
    
}

