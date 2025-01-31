// Task 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

constexpr char TERMINATE_SYMBOL = '\0';

bool checkDate(char* date)
{
	if (!date){
		return false;
	}

	if (date[2] != '.' || date[5] != TERMINATE_SYMBOL){
		return false;
	}

	int day = (date[0] - '0') * 10 + (date[1] - '0');
	int month = (date[3] - '0') * 10 + (date[4] - '0');

	if (month < 0 || month > 12){
		return false;
	}

	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (day > daysInMonth[month-1])
	{
		return false;
	}

	return true;
}

int main()
{
    
}

