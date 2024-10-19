// Problem 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number; 

    cin >> number;

    int current = 1;

    for (int i = 1; i <= number; i++) {

        if (i != 1) {
            current = current + number;

        }
        else {
            current = current + number - 1;
             
        }
        for (int j = number - 1; j >= 0; j--) {

            if (i % 2 != 0) {

                cout << (current - j) << " ";

            }
            else {
                cout << (current - (number -1 -j)) << " ";
            }

            
            
        }
        cout << "\n";


    }

    cout << endl;
}

