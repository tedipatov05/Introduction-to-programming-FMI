// Task 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool endsWith(long n, long k){

	if (k == 0)
	{
		return true;
	}

	if ((n % 10) != (k % 10))
	{
		return false;
	}

	
	return endsWith(n / 10, k / 10);
	
}

int main()
{
	long n = 152363123;
	long k = 2363123;

	cout << boolalpha << endsWith(n, k);
}

