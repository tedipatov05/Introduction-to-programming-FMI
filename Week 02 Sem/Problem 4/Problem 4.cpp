// Problem 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const double PI = 3.14;

int main()
{
    char type; 

    cin >> type;

	switch (type)
	{
		case 's':
		{
			float a;
			cin >> a;

			cout << "S: " << a * a << endl;
			break;
		}
		case 'r':
		{
			float a = 0, b;
			cin >> a >> b;

			cout << "S: " << a * b << endl;
			break;
		}
		case 'c':
		{
			float r;
			cin >> r;

			cout << "S: " << PI * r * r << endl;

			break;
		}
		case 't':
		{
			float a = 0, h;
			cin >> a >> h;

			cout << "S: " << (a * h) / 2 << endl;
			break;
		}
		default:
		{
			cout << "Invalid figure" << endl;
			break;
		}
	}
}

