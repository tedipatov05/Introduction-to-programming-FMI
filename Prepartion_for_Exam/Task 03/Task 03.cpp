// Task 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

constexpr int ROW_COUNT = 25;
constexpr int COL_COUNT = 80;


void printRectangularInTheCenter(int rows, int cols, char symbol)
{
	int paddingTop = (ROW_COUNT - rows) / 2;
	int paddintLeft = (COL_COUNT - cols) / 2;

	for (int i = 0; i < paddingTop; i++){
		std::cout << std::endl;
	}

	for (int i = 0; i < ROW_COUNT; i++)
	{
		for (int j = 0; j < paddintLeft; j++)
		{
			std::cout << " ";
		}

		if (i < rows)
		{
			for (int j = 0; j < cols; j++)
			{
				std::cout << symbol;
			}
			for (int j = 0; j < paddintLeft; j++)
			{
				std::cout << " ";
			}
		}
		
		std::cout << std::endl;

	}

}

int main()
{
	printRectangularInTheCenter(10, 20, '*');
}

