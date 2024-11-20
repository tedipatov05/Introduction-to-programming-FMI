

#include <iostream>
using namespace std;

const int SIZE = 10;

int findSumOfElementsWithSumOfIndexes(const int matrix[][SIZE], size_t rows, size_t cols, int s) {
	int sum = 0;
	for (size_t r = 0; r < rows; r++) {
		for (size_t c = 0; c < cols; c++) {
			if (r + c == s) {
				sum += matrix[r][c];
			}
		}
	}

	return sum;
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
	int rows, cols, s;

	cin >> rows >> cols >> s;

	int matrix[SIZE][SIZE];

	inputMatrix(matrix, rows, cols);

	int sum = findSumOfElementsWithSumOfIndexes(matrix, rows, cols, s);

	cout << sum << endl;


}

