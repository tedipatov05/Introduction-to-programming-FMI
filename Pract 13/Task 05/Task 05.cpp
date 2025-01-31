// Task 05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int fibb_recursive(int n, int*& memo) {

    if (memo[n] != 0)
        return memo[n];

    if (n <= 1)
        return 1; 

    memo[n] = fibb_recursive(n - 1, memo) + fibb_recursive(n - 2, memo);

    return memo[n];
}

int main()
{

	int n = 10;
    int* memo = new int[n + 11] {0};
	cout << fibb_recursive(n, memo);

}

