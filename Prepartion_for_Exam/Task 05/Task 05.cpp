// Task 05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int** transponateMatrix(int** matrix,int n)
{
	int** result = new int* [n];
	for (size_t i = 0; i < n; i++)
	{
		result[i] = new int[n];
	}

	for (size_t row = 0; row < n; row++)
	{
		for (size_t col = 0; col < n; col++)
		{
			result[row][col] = matrix[col][row];
		}
	}

}

int main()
{
    std::cout << "Hello World!\n";
}

