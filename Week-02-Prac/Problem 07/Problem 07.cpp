// Problem 07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

    // (x1, y1) -> top left point
    // (x2, y2) -> bottom right point 
    // (x2, y1) -> top right point 
    // (x1, y2) -> bottom left point 

    bool isInRectangle = x >= x1 && x <= x2 && y >= y2 && y <= y1;

    cout << boolalpha << isInRectangle << endl;
}

