// Task 09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap(unsigned& a, unsigned& b) {
    a = a ^ b; 
    b = a ^ b; 
    a = a ^ b; 
}

int main()
{
    int a, b;

    cin >> a >> b;

    swap(a, b);

    cout << a << " " << b;
}

