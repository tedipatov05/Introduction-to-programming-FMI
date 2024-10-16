// Problem 17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;



    bool isInAOrB = ((int)e >= (int)a && (int)e <= (int)b) ||
        ((int)e >= (int)c && (int)e <= (int)d);

    bool isInAandB = ((int)e >= (int)a && (int)e <= (int)b) &&
        ((int)e >= (int)c && (int)e <= (int)d);

    bool isInAWithoutB = ((int)e >= (int)a && (int)e <= (int)b) &&
        !((int)e >= (int)c && (int)e <= (int)d);

    bool result = isInAOrB && !isInAandB;

    cout << boolalpha << isInAOrB << "," << boolalpha << isInAandB << "," << boolalpha << isInAWithoutB << ","
        << boolalpha << result;
}

