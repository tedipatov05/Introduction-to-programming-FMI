
#include <iostream>
using namespace std;

constexpr int SIZE = 10;

void inputMatrix(int matrix[][SIZE], size_t rows, size_t cols) {

	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < cols; c++) {
			cin >> matrix[r][c];
		}
	}

}

bool isDiagonalIcreasing(const int matrix[][SIZE], size_t startRow, size_t startCol, size_t rows, size_t cols) {
	int currentRow = startRow, currentCol = startCol;

	while (currentRow < rows - 1 && currentCol < cols - 1) {
		if (matrix[currentRow][currentCol] >= matrix[currentRow + 1][currentCol + 1]) {
			return false;
		}

		currentRow++;
		currentCol++;
	}

	return true;
}

bool areAllDiagonalsIncreasing(const int matrix[][SIZE], size_t rows, size_t cols) {
	for (size_t row = 0; row < rows; row++) {
		if (!isDiagonalIcreasing(matrix, row, 0, rows, cols)) {
			return false;
		}
	}

	for (size_t col = 1; col < cols; col++) {
		if (!isDiagonalIcreasing(matrix, 0, col, rows, cols)) {
			return false;
		}
	}

	return true;
}


int main()
{
	size_t rows, cols;

	cin >> rows >> cols;

	int matrix[SIZE][SIZE];

	inputMatrix(matrix, rows, cols);

	if (areAllDiagonalsIncreasing(matrix, rows, cols)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}


}

