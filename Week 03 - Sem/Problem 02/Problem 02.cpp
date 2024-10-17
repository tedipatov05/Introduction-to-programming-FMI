// Problem 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number;
    int result = 0;
    cin >> number;

    while (number != 0) {
        result *= 10;

        result += number % 10;

        number /= 10;


    }

    cout<< (result+1) << endl;
    

    
}

