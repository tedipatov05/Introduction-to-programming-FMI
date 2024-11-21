
#include <iostream>
using namespace std;


int longestSequenceOfEqualNumbers(const int arr[], size_t length) {
	int longestSequenceLength = 1;
	int currentLength = 1;
	for (size_t i = 0; i < length - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			currentLength++;
		}
		else {
			longestSequenceLength = currentLength > longestSequenceLength ? currentLength : longestSequenceLength;
			currentLength = 1;
		}
		

	}
	longestSequenceLength = currentLength > longestSequenceLength ? currentLength : longestSequenceLength;

	return longestSequenceLength;
}

int main()
{
	int arr[] = { 3, 3, 2, 2, 2, 5, 2, 2, 3, 3, 3  };
	int result = longestSequenceOfEqualNumbers(arr, 11);

	cout << result;
}

