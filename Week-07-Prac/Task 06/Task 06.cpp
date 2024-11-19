
#include <iostream>
using namespace std;

constexpr int SIZE = 10;

int findSumUnderMainDiagonal(const int matrix[][SIZE], size_t rows, size_t cols) {
    int sum = 0;

    for (size_t r = 0; r < rows; r++) {
        for (size_t c = 0; c < cols; c++) {
            if (c < r) {
                sum += matrix[r][c];
            }
        }
    }

    return sum;


}

int findSumOnAndAboveTheMainDiagonal(const int matrix[][SIZE], size_t rows, size_t cols) {
    int sum = 0;

    for (size_t r = 0; r < rows; r++) {
        for (size_t c = 0; c < cols; c++) {
            if (c >= r) {
                sum += matrix[r][c];
            }
        }
    }

    return sum;
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
    size_t rows, cols;
    cin >> rows >> cols;

    int matrix[SIZE][SIZE];
    initializeMatrix(matrix, rows, cols);

    int sumUnderMainD = findSumUnderMainDiagonal(matrix, rows, cols);
    int sumOnAndAboveMainD = findSumOnAndAboveTheMainDiagonal(matrix, rows, cols);

    cout << sumUnderMainD << " " << sumOnAndAboveMainD;
}

