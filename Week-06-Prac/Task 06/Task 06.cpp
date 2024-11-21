
#include <iostream>
using namespace std;

constexpr int SUM = 210;

int findTheMissedElementInThePermutation(const int arr[], size_t length) {
	int sum = 0;

	for (size_t i = 0; i < length; i++) {
		sum += arr[i];
	}

	return SUM - sum;
}

int main()
{

}
