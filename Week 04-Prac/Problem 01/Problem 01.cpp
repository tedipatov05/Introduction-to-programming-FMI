// Problem 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int myAbs(int number) {


	if (number < 0) {
		return number * (-1);
	}
	else {
		return number;
	}
}

int main()
{
	cout << myAbs(-6) << endl;
}

