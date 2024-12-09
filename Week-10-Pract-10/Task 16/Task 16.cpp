

#include <iostream>
using namespace std;

constexpr int BIGGEST_CHAR = 127;

void sortCharacters(const char* str, char* result) {
    if (!str || !result) {
        return;
    }

    //int minCharValue = 0;
    char minChar = (char)BIGGEST_CHAR;
    while (*str) {
        const char* strCopy = str;
        while (*strCopy) {
            if ((int)*strCopy < (int)minChar) {
                minChar = *strCopy;
            }
            strCopy++;
        }

        str++;
        *result = minChar;
        result++;
        minChar = (char)BIGGEST_CHAR;

    }

}

int main()
{
    std::cout << "Hello World!\n";
}

