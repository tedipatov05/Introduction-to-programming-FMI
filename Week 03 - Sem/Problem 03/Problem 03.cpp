// Problem 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int maxCount = 0;
    int mostFrequent = 0 ;

    for (int digit = 0; digit < 9; digit++) {
        int count = 0;
        int temp = number;


        while (temp != 0) {
            

            if (temp % 10 == digit) {
                count++;
            }

            temp /= 10;


        }

        if (count > maxCount || (maxCount == count && digit < mostFrequent)) {
            maxCount = count;
            mostFrequent = digit;
        }
    }

    cout << mostFrequent << endl;

}

