// Tic-Tac-Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int SIZE = 3;
const char DEFAULT_CHAR = '-';
void printMatrix(const char board[SIZE][SIZE]);
void initializeBoard(char board[SIZE][SIZE], char defaultValue);
void readValidCoordinates(const char board[][SIZE], int& i, int& j);
bool areValidCoordinates(const char board[][SIZE], int i, int j);

int main()
{
    char board[SIZE][SIZE];
    initializeBoard(board, DEFAULT_CHAR);

    for (int roundCounter = 0; roundCounter < SIZE * SIZE; roundCounter++) {
        int i, j;
        readValidCoordinates(board,i, j);

        // set to board
        // check for win 
            // return 
    }


}

bool areValidCoordinates(const char board[][SIZE], int i, int j) {

}

void printMatrix(const char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;

    }
}

void readValidCoordinates(const char board[][SIZE], int& i, int& j) {
    do {

    } while (!areValidCoordinates(board, i, j));
}

void initializeBoard(char board[SIZE][SIZE], char defaultValue) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = defaultValue;
        }

    }
}

