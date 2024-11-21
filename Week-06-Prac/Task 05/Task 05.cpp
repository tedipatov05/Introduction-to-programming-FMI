

#include <iostream>
using namespace std;


bool checkIfNumberContainsIndex(int number, size_t index) {
    while (number > 1) {
        int digit = number % 10;
        if (digit == index) {
            return true;
        }

        number /= 10;
    }

    return false;
}

void makeZeroNumberWithoutIndexInIt(int arr[], size_t length) {
    for (int i = 0; i < length; i++) {
        if (!checkIfNumberContainsIndex(arr[i], i)) {
            arr[i] = 0;
        }
    }
}



void printArr(const int arr[], size_t length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr[] = { 45, 62, 23, 47, 47, 65, 100 };
    makeZeroNumberWithoutIndexInIt(arr, 7);
    printArr(arr, 7);

}
