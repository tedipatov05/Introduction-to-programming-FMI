// Таск 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned strLen(char* str){
	unsigned len = 0;
	while (*str){
		len++;
		str++;
	}

	return len;
}

bool isPalindromeRec(char* str, int start, int end){
	if (start == end){
		return true;
	}

	if (str[start] != str[end]){
		return false;
	} else{
		return isPalindromeRec(str, start + 1, end - 1);

	}
}

bool isPalindrome(char* str) {
	int len = strlen(str);
	return isPalindromeRec(str, 0, len - 1);
}

int main(){
	char str[] = "debel lebed";

	cout << boolalpha << isPalindrome(str) << endl;
}

