// Task 09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap(int*& ptr1, int*& ptr2) {

    int* temp = ptr2;
    ptr2 = ptr1;
    ptr1 = temp;
    

}

int main()
{
    int a = 3, b = 4;
    int* ptr1 = &a;
    int* ptr2 = &b;

    cout << *ptr1 << " " << *ptr2 << endl;
    swap(ptr1, ptr2);
    cout << *ptr1 << " " << *ptr2 << endl;

  
}

