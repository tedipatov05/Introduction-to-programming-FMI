// Problem 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r, x, y;

    cin >> r >> x >> y;

    double distance = sqrt(x * x + y * y);

    if (distance - r < 0.000000001) {
        cout << " On the circle" << endl;
    }
    else if (distance < r){
        cout << "In the circle" << endl;
    }
    else {
        cout << "Out of the circle" << endl;
    }
}

