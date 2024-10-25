

#include <iostream>
using namespace std;

int getDivision(int first, int second) {

    if (first < second) {
        return 0;
    }

    int count = 0;

    while (first > second) {
        first -= second;
        count++;

    }

    return count;


}

int main()
{
    cout << getDivision(30, 7) << endl;
}

