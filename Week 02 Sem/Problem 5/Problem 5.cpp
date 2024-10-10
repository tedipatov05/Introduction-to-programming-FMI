// Problem 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <format> 
#include <iostream> 
using namespace std; 

int main()
{
    int h, m;
    cin >> h >> m;

    //h = m + 15 > 59 ? h + 1 : h;

    if (m + 15 > 59) {
        h += 1;
        m = (m + 15) - 60;
    }
    else {
        m += 15;
    }
    
    h %= 24;

    if (h < 10) {
        cout << "0";
    }
    cout << (h < 10 ? "0" : "")<< h << ":" << (m < 10 ? "0" : "") << m << endl;
    


    

}

