// Task 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr int DAYS_COUNT = 7;

void decodeDays(uint8_t schedule) {
	const char* days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	bool first = true;

	for (int i = 0; i < DAYS_COUNT; i++) {
		if (schedule & (1 << i)) {
			if (!first) {
				cout << ", ";
			}
			cout << days[i];
			first = false;
		}
	}

	if (first) {
		cout << "None";
	}

	cout << endl;
}



int main()
{
	int schedule;

	cin >> schedule;

	decodeDays(schedule);
}

