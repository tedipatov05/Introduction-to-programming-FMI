// Problem 08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int mylog(int k, int n) {

    int step = 0;
    int stepResult = 1;
    while (stepResult < n) {
        stepResult *= k;
        step++;
        if (stepResult == n) {
            return step;
        }
    }

    return step - 1;

}


int main()
{
    int n, k;

    cin >> n >> k;

    cout << mylog(k, n) << endl;


}

