
#include <iostream>
using namespace std;

constexpr int SIZE = 100;


bool isTriangular(const int matrix[][SIZE], size_t rows, size_t cols) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (c < r && matrix[r][c] != 0) {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int matrix[][SIZE] = {{5, 1, 5}, {0, 5, 9}, {0, 0, 7} };

    cout << boolalpha << isTriangular(matrix, 3, 3) << endl;
}

