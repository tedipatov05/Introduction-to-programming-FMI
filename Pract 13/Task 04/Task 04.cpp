// Task 04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int length(int n) {

	int len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}

	return len;
}



int reverse(int n, int len)
{
	if (len == 0)
	{
		return 0;
	}

	return pow(10, len-1)*(n % 10) + reverse(n / 10, len-1);

	
}

int main()
{
	int a = 13215;
	int len = length(a);
	cout << reverse(a, len);

}

