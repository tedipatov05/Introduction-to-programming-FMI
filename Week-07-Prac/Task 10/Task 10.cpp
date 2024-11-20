
#include <iostream>
using namespace std;

constexpr int SIZE = 20;

void printMatrix(const int matrix[][SIZE], size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r++) {
        for (size_t c = 0; c < cols; c++) {
            cout << matrix[r][c] << " ";
        }

        cout << endl;
    }
}

void sumTwoMatrix(const int matrixOne[][SIZE], size_t rowsOne, size_t colsOne, const int matrixTwo[][SIZE], int resultMatrix[][SIZE]) {
   

    for (size_t r = 0; r < rowsOne; r++) {
        for (size_t c = 0; c < colsOne; c++) {
            resultMatrix[r][c] = matrixOne[r][c] + matrixTwo[r][c];

        }
    }

    //printMatrix(resultMatrix, rowsOne, colsOne);


}

void multiplyMatrices(const int matrixOne[][SIZE], const int matrixTwo[][SIZE], size_t rows, size_t cols1, size_t cols2, int resultMatrix[][SIZE]) {
    for (size_t r = 0; r < rows; r++) {
        for (size_t c = 0; c < cols2; c++) {

            resultMatrix[r][c] = 0;
            for (size_t k = 0; k < cols1; k++) {
                resultMatrix[r][c] += matrixOne[r][k] * matrixTwo[k][c];
            }
            
        }
    }


}



int main()
{
   /* char a;

    cin >> a;

    int num = a;

    cout << a << " " << num;*/
}

