

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    int num;

    cin >> num;
    while (num != 0) {
        sum += num;
        cin >> num;
    }

    cout << sum << endl;
    
}
