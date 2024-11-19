// Task 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Task 01.h"
using namespace std;

const int MAX_SIZE = 100;

void readMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
}

void print(const int matrix[][MAX_SIZE], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] <<  " ";
		}

		cout << endl;
	}
}

void sumMatrix(const int matrix1[][MAX_SIZE], const int matrix2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
}

void setValue(int matrix[][MAX_SIZE], int rows, int cols, int value) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = value;
		}
	}
}



int main()
{
	int matrix1[MAX_SIZE][MAX_SIZE];
	int matrix2[MAX_SIZE][MAX_SIZE];

	int rows, cols;

	cin >> rows >> cols;

	readMatrix(matrix1, rows, cols);
	readMatrix(matrix2, rows, cols);

	int result[MAX_SIZE][MAX_SIZE];
	setValue(result, rows, cols, 0);

	sumMatrix(matrix1, matrix2, result, rows, cols);


	print(result, rows, cols);

	return 0;
}

