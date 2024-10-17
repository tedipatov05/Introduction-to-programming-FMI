// Problem 06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;

    cin >> num;
    
    if (num == 1) {
        cout << "Not Prime" << endl;
        return 0;
    }

    int edge = sqrt(num);

    for (int i = 2; i <=  edge; i++) {
        if (num % i == 0) {
            cout << "Not prime" << endl;
            return 0; 
        }
    }

    cout << "Prime" << endl;

}
