

#include <iostream>
using namespace std;

const int SIZE = 10;

int maxSubmatrixSum(const int matrix[SIZE][SIZE], size_t m, size_t n, size_t p, size_t q) {
    int maxSum = INT_MIN;

    int rowSums[SIZE][SIZE] = { 0 };

    for (size_t r = 0; r < m; r++) {
        for (size_t c = 0; c <= n - q; c++) {
            for (size_t k = 0; k < q; k++) {
                rowSums[r][c] += matrix[r][c + k];
            }
        }
    }

    for (size_t c = 0; c <= n - q; c++) {
        for (size_t r = 0; r <= m - p; r++) {
            int currentSum = 0;
            for (size_t k = 0; k < p; k++) {
                currentSum += rowSums[r + k][c];
            }
            maxSum = maxSum > currentSum ? maxSum : currentSum;
        }
    }

    return maxSum;
}

void initializeMatrix(int matrix[][SIZE], size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; i++) {

        for (size_t j = 0; j < cols; j++) {

            cin >> matrix[i][j];
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    int p, q;
    cin >> p >> q;

    int matrix[SIZE][SIZE];

    initializeMatrix(matrix, m, n);

    int result = maxSubmatrixSum(matrix, m, n, p, q);

    cout << result;


}





