// Problem 09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double getDistance(int a, int b) {
	return sqrt(a * a + b * b);
}

bool areOnTheSameCircle(int a, int b, int c, int d) {
	return a * a + b * b == c * c + d * d;
}

int main()
{
}

