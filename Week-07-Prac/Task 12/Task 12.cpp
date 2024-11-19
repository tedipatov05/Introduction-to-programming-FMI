// Task 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr int SIZE = 2;
constexpr int SIZE_ROWS = 100;

void swapRows(int matrix[][SIZE], int row1, int row2);
void sortMatrixByCols(int matrix[][SIZE], int rows, int cols);
void print(const int matrix[][SIZE], int rows, int cols);
void setMinIndexRow(int matrix[][SIZE], int r2, int& minindexRow);




int main()
{
	int n;

	cin >> n;


	int matrix[SIZE_ROWS][SIZE];

	for (size_t row = 0; row < n; row++) {
		for (size_t col = 0; col < SIZE; col++) {
			cin >> matrix[row][col];
		}
	}

	sortMatrixByCols(matrix, n, SIZE);

	print(matrix, n, SIZE);


}

void swapRows(int matrix[][SIZE], int row1, int row2) {

	for (size_t c = 0; c < SIZE; c++) {
		int temp = matrix[row1][c];
		matrix[row1][c] = matrix[row2][c];
		matrix[row2][c] = temp;
	}

}

void setMinIndexRow(int matrix[][SIZE], int r2, int& minIndexRow) {
	if (matrix[r2][0] < matrix[minIndexRow][0]) {
		minIndexRow = r2;
	}
	else if (matrix[r2][0] == matrix[minIndexRow][0] && matrix[r2][1] < matrix[minIndexRow][1]) {
		minIndexRow = r2;
	}
}


void sortMatrixByCols(int matrix[][SIZE], int rows, int cols) {
	for (size_t r = 0; r < rows - 1; r++) {
		int minIndexRow = r;
		for (size_t r2 = r + 1; r2 < rows; r2++) {
			setMinIndexRow(matrix, r2, minIndexRow);
		}


		swapRows(matrix, r, minIndexRow);
	}

}

void print(const int matrix[][SIZE], int rows, int cols) {
	for (size_t r = 0; r < rows; r++) {
		for (size_t c = 0; c < cols; c++) {
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}
}






