
#include <iostream>
using namespace std;

bool isGeometricalPrograsion(int arr[], int size) {
	if (size < 2) {
		return false;
	}

	double ratio = (double)arr[1] / arr[0];

	for (int i = 0; i < size; i++) {
		if (arr[i - 1] == 0 || (double)arr[i] / arr[i - 1] != ratio) {
			return false;
		}
	}

	return true;
}

int main()
{

}

