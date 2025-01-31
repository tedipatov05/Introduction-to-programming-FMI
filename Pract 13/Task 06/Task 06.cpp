// Task 06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace  std;

void printNumbers(unsigned int n, int beg) {

    if (n == 0)
    {
        return;
    }

    for (unsigned i = n; i >= beg; i--)
    {
        cout << i << " ";
    }
    cout << endl;
    printNumbers(n-1, beg);




}

int main()
{
    printNumbers(5, 1);
}

