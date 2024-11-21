// Task 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr int SIZE = 10;

int getColSum(const int matrix[][SIZE], size_t rows, size_t colInx) {
    int sum = 0;

    for (size_t r = 0; r < rows; r++) {
        sum += matrix[r][colInx];
    }

    return sum;
}

bool hasTwoColsWithSum(const int matrix[][SIZE], size_t rows, size_t cols, int searchedSum) {

    int sums[SIZE];

    for (int i = 0; i < cols; i++) {
        sums[i] = getColSum(matrix, rows, i);
    }

    int start = 0, end = cols - 1;

    while (start <= end) {
        int sumofCols = sums[start] + sums[end];

        if (sumofCols == searchedSum) {
            return true;
        }
        else if (sumofCols > searchedSum) {
            end--;
        }
        else {
            start++;
        }
    }

    return false;

}

void inputMatrix(int matrix[][SIZE], size_t rows, size_t cols) {

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> matrix[r][c];
        }
    }

}


int main()
{
    
}
