// Problem 04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	cin >> num1 >> num2;

	int smaller = (num1 < num2) ? num1 : num2;


	// Evklid algo
	while (num2 != 0) {
		int temp = num2;
		num2 = num1 % num2;
		num1 = temp;

	}
	cout << num1;
	

	/*for (int i = smaller; i >= 1; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			cout << i << endl;
			break;
		}
	}*/


}
