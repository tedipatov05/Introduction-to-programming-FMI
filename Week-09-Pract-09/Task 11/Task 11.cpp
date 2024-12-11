// Task 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void extractIPAddress(uint32_t ip) {
	
	
	int a = (ip >> 24) & 0xFF;
	int b = (ip >> 16) & 0xFF;
	int c = (ip >> 8) & 0xFF;
	int d = ip & 0xFF;

	cout << a << " " << b << " " << c << " " << d << endl;
}

int main()
{
	uint32_t ip;

	cin >> ip;

	extractIPAddress(ip);
}

