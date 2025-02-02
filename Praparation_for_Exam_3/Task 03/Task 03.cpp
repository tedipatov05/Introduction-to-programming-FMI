// Task 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits.h>

int numberLen(long num) {
	int len = 0;
	while (num) {
		num /= 10;
		len++;
	}
	return len;

}

char* numberToChar(long num) {
	int numberLen = numberLen(num);
	char* result = new char[numberLen];

	for (int i = numberLen - 1; i >= 0; i--) {
		result[i] = num % 10 + '0';
		num /= 10;
	}


	return result;


}

long absDiff(long a, long b) {
	return a > b ? a - b : b - a;
}

char* findDiff(const long nums[], size_t N) {
	long idx1 = -1, idx2 = -1, diff = 120383982;

	for (int i = 0; i < N; i++) {
		int currentNum = nums[i];
		if (numberLen(currentNum) != N) {
			continue;
		}
		for (int j = 0; j < N; j++) {
			if (i == j) {
				continue;
			}
			if (numberLen(nums[j]) != N) {
				continue;
			}

			int currentDiff = absDiff(currentNum, nums[j]);
			if (currentDiff < diff) {
				diff = currentDiff;
				idx1 = currentNum > nums[j] ? i : j;
				idx2 = currentNum > nums[j] ? j : i;
			}
			else if (currentDiff == diff) {
				if (idx1 > i || idx2 > j) {
					idx1 = i;
					idx2 = j;
				}
			}
		}

	}

	int num1Len = numberLen(nums[idx1]);
	int num2Len = numberLen(nums[idx2]);

	char* num1Str = numberToChar(nums[idx1]);
	char* num2Str = numberToChar(nums[idx2]);

	char* result = new char[num1Len + 1 + num2Len +1];

	for (size_t i = 0; i < num1Len + num2Len; i++){

		if (i < num1Len) {
			result[i] = num1Str[i];
		}
		else if (i == num1Len) {
			result[i] = ',';
		}
		else {
			result[i] = num2Str[i];
		}


	}

	result[num1Len + num2Len] = '\0';
	
}

int main()
{
	int res = 3 % 10;

	std::cout << res << std::endl;
}

