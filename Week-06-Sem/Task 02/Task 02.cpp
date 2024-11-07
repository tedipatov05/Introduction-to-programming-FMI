// Task 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1,2,3,4,5,6 };

    int gues;

    cin >> gues;

    bool isGuesed = false;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == gues) {
            isGuesed = true;
            break;
        }
    }

    if (isGuesed) {
        cout << "You won";
    }
    else {
        cout << "You lose";
    }
   



}

