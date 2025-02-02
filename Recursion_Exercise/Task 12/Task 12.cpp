// Task 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isValid(int** mtx, int rows, int cols, int row, int col, bool** visited) {
    return row >= 0 && row < rows && col >= 0 && col < cols && mtx[row][col] == 1 && !visited[row][col];
}

bool canReachEnd(int** mtx, int rows, int cols, int startRow,
    int startCol, int endRow, int endCol, bool** visited) {

    if (startRow == endRow && startCol == endCol)
        return true;

    visited[startRow][startCol] = true;

    int dRow[] = { 1, -1, 0, 0 };
    int dCol[] = { 0, 0, 1, -1 };

    for (int i = 0; i < 4; i++) {
        int currRow = startRow + dRow[i];
        int currCol = startCol + dCol[i];

        if (isValid(mtx, rows, cols, currRow, currCol, visited) &&
            canReachEnd(mtx, rows, cols, currRow, currCol, endRow, endCol, visited))
            return true;
    }

    return false;
}

int main()
{
    std::cout << "Hello World!\n";
}

