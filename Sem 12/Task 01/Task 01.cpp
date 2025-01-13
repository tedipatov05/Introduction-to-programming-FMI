
#include <iostream>
using namespace std;

int fibonaci(int nth) {

    if (nth == 0) {
        return 0;
    }

    if (nth == 1) {
        return 1; 

    }


    return fibonaci(nth - 1) + fibonaci(nth - 2);

}

int main()
{
    int res = fibonaci(3);
    cout << res << endl;
}

