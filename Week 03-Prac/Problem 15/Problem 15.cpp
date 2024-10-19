// Problem 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k;

    cin >> k;

    int number;
    cin >> number;

    int maxsuffix = 0;
    int count = 0;

    while (number != 0) {

        int numberLength = 0;
        int temp = number;
        while (temp > 1) {
            temp /= 10;
            numberLength++;
        }

        int divider = (int)pow(10, numberLength);
        if (k % divider == number) {
            count++;
            if (number > maxsuffix) {
                maxsuffix = number;
            }
        }

        cin >> number;

    }

    cout << "Max suffix: " << maxsuffix << "\n" << "Count: " << count << endl;
    
}

