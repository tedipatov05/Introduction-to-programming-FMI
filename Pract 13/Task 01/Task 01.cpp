
#include <iostream>
using namespace std;

bool isPalindrome(const char* str, int start, int end)
{
	if (start >= end)
	{
		return true;
	}

	if (str[start] != str[end])
	{
		return false;
	}

	return isPalindrome(str, start + 1, end + 1);
}

int multiplyNumbersRec(int num1, int num2, int result)
{
	if (num1 == 0)
	{
		return result;
	}

	return multiplyNumbersRec(num1-1, num2, result + num2);
}


int main()
{
	int a = 5, b = 6, res=0;
	cout << multiplyNumbersRec(a, b, res);
}

