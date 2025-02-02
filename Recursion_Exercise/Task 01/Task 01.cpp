// Task 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sumOfDivisors(int n, int divisor) {
    if (divisor == 1) {
        return 1;
    }

    if (n % divisor == 0) {
        return divisor + sumOfDivisors(n, divisor - 1);
    }
    else {
        return sumOfDivisors(n, divisor - 1);
    }
}

bool isPerfect(int n) {
    if (n <= 1) {
        return false;
    }

    int sum = sumOfDivisors(n, n - 1);

    return sum == n;
}

int main()
{
    int n = 33550336;
	cout << boolalpha << isPerfect(n) << endl;
}
