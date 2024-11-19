
#include <iostream>
using namespace std;

constexpr int SIZE = 10;

// a11 a12 a13 a14
// a21 a22 a23 a24
// a31 a32 a33 a34
// a41 a42 a43 a44

// should print: a11 a12 a13 a14 a24 a34 a44 a43 a42 a41 a31 a21 a22 a23 a33 a32

void printMatrixSpirally(const int matrix[][SIZE], size_t row, size_t col) {

	int top = 0, bottom = row - 1;
	int left = 0, right = col - 1;

	while (top <= bottom && left <= right) {

		for (size_t i = 0; i < right; i++) {
			cout << matrix[top][i] << " ";
		}

		top++;

		for (size_t i = top; i <= bottom; i++) {
			cout << matrix[i][right] << " ";
		}
		right--;

		for (int i = right; i >= left; i--) {
			cout << matrix[bottom][i] << " ";
		}
		bottom--;

		for (int i = bottom; i >= top; i--) {
			cout << matrix[i][left] << " ";
		}
		left++;
	}

	cout << endl;


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

	printMatrixSpirally(matrix, rows, cols);


}
