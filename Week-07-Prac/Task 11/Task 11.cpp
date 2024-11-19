// Task 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr int SIZE = 100;

int findSubmatrixSum(const int matrix[][SIZE], int m, int n, int p, int q);

int main()
{
    int m, n;
    cin >> m >> n;

    int p, q;
    cin >> p >> q;

    int matrix[SIZE][SIZE];

    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++) {
            cin >> matrix[r][c];
        }
    }

    int result = findSubmatrixSum(matrix, m, n, p, q);

    cout << result;


}

int findSubmatrixSum(const int matrix[][SIZE], int m, int n, int p, int q) {
    int maxSum = INT_MIN;

    for (size_t row = 0; row <= m - p; row++) {
        int tempSum[SIZE] = { 0 };

        for (size_t i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                tempSum[i] += matrix[row + i][j];
            }
        }

        int currentSum = 0; 

        for (size_t col = 0; col < q; col++) {
            currentSum += tempSum[col];
        }

        maxSum = maxSum > currentSum ? maxSum : currentSum;

        for (size_t col = q; col < n; col++) {
            currentSum += tempSum[col] - tempSum[col - q];
            maxSum = maxSum > currentSum ? maxSum : currentSum;

        }
    }

    return maxSum;
}

