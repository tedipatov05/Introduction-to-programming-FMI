// Problem 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


bool isBigCharacter(char ch) {
	return ch >= 'A' && ch <= 'Z';
}

int main()
{
	char ch;

	cin >> ch;

	cout << boolalpha << isBigCharacter(ch) << endl;

}


