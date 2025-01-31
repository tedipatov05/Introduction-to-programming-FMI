// Task 04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int findSumAboveMainDiagonal(int** matrix, int n )
{
	int sum = 0;
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++)
		{
			if (col > row)
			{
				sum += matrix[row][col];
			}
		}
	}

	return sum;
}

int main()
{
	
	
}
