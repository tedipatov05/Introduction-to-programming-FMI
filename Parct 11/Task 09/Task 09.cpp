// Task 09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr int COLS = 2;

int** matrixNeighbors(int** matrix, int rows, int biggestNum) {
	int** resultMatrix = new int* [biggestNum + 1];
	for (int i = 0; i < rows+1; i++) {
		resultMatrix[i] = new int[COLS];
		for (int j = 0; j < biggestNum + 1; j++) {
			resultMatrix[i][j] = 0;
		}
	}

	int cols = 0;

	for (unsigned i = 0; i < 2; i++) {
		for (int num = 0; num < biggestNum+1; num++) {
			for (int mtrR = 0; mtrR < rows; mtrR++) {
				if (matrix[mtrR][i] == num) {
					int opp = i == 0 ? 1 : 0;
					int col = matrix[mtrR][opp];
					resultMatrix[num][col]++;
				}
			}
		}
	}
	

	return resultMatrix;

}

void printMatrix(int** matrix, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void freeMemory(int** matrix, int size) {
	for (int i = 0; i < size + 1; i++) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

int main()
{

	int n;
	cin >> n;

	int** matrix = new int* [n + 1];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n + 1];
		for (int c = 0; c < 2; c++) {
			cin >> matrix[i][c];

		}
	}

	int** result = matrixNeighbors(matrix, n, n);

	printMatrix(result, n + 1);

	freeMemory(result, n + 1);
	freeMemory(matrix, n + 1);

	

}

