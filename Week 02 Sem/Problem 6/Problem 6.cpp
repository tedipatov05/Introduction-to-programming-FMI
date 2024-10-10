// Problem 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    
    cout << (
        ((a >= b && b >= c) || (a <= b && b <= c)) &&  
        ((b >= c && c >= d) || (b <= c && c <= d)) &&  
        ((c >= d && d >= e) || (c <= d && d <= e))     
        ? "yes"
        : "no"
        ) << endl;

    return 0;

}

