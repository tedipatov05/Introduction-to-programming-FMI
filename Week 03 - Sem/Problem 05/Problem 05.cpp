
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int bigger = num1 > num2 ? num1 : num2;

    for (int i = bigger; ; i+= bigger) {
        if (i % num1 == 0 && i % num2 == 0) {
            cout << i << endl;
            break;
        }
    }
}
