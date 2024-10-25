// Problem 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }

    return a;
}

int lcm(int a, int b) {

    return (a / gcd(a, b)) * b;

}



int main()
{
    int number;

    cin >> number;

    int num;

    cin >> num;

    int gcdResult = num;
    int lcmResult = num;

    for (int i = 1; i < number; i++) {

        cin >> num;

        gcdResult = gcd(gcdResult, num);
        lcmResult = lcm(lcmResult, num);

        
    }

    cout << gcdResult << endl;
    cout << lcmResult << endl;

}

