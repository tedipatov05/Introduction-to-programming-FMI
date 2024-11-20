

#include <iostream>
using namespace std;

constexpr int SIZE = 10;

bool isSymetricalMatrix(const int matrix[][SIZE], size_t rows, size_t cols) {
	for (size_t r = 0; r < rows; r++) {
		for (size_t c = 0; c < cols; c++) {
			if (matrix[r][c] != matrix[c][r]) {
				return false;
			}
		}
		
	}

	return true;
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
	int rows, cols;

	cin >> rows >> cols;

	int matrix[SIZE][SIZE];

	inputMatrix(matrix, rows, cols);

	cout << boolalpha << isSymetricalMatrix(matrix, rows, cols) << endl;

}

