// Problem 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int pow(int n, int k) {
   
    int sum = 1;
    for (int i = 0; i < k; i++) {
        sum *= n;
    }

    return sum;
}

int main()
{
    int n; 
    int k;

    cin >> n;
    cin >> k;

    cout << pow(n, k) << endl;
    
}

