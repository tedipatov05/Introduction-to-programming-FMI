// Task 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool hasK(int num, int k) {

    if (num == 0)
    {
        return false;
    }

    if (num % 10 == k)
    {
        return true;
    }

    return hasK(num / 10, k);

}

int main()
{
    
}

