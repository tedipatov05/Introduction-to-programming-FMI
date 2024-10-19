
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;
	int number;

	bool isFound = false;
	int candidate = 0;

	int biggestNum = 0;

	for (int i = 1; i <= n; i++) {

		cin >> number;
		sum += number;
		if (biggestNum < number) {
			biggestNum = number;
		}

	}

	if (2 * biggestNum == sum) {
		isFound = true;
		candidate = biggestNum;
	}

	if (isFound) {
		cout << "Yes: " << candidate << endl;
	}
	else {
		cout << "No";
	}
}

