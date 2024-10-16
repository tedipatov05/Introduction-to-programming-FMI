// Problem 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int r, x, y;

    cin >> r >> x >> y;

    int z = sqrt(x * x + y * y);

    if (z == r) {
        cout << "On the circle" << endl;
    }
    else if (z < r) {
        cout << "In the circle" << endl;
    }
    else {
        cout << "Out of the circle" << endl;
    }
}

