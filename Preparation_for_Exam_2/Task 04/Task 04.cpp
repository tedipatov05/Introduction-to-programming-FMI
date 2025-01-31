// Task 04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

long reverseNumber(long num) {
	long reversed = 0;
	while (num != 0) {
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return reversed;
}

int digitPost(long num, int k){
	if (k < 0){
		return -1;
	}

	int reversedNum = reverseNumber(num);
	int i = 0;
	while (i < k-1)
	{
		reversedNum /= 10;
		i++;
	}

	if (reversedNum < 1) {
		return -1;
	}

	return reversedNum % 10;

}

int main()
{
	long num = 123456789;
	int k = 3;
	cout << digitPost(num, k) << endl;
}



