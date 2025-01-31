// Task 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double my_abs(double a, double b)
{
	if (a > b)
	{
		return a - b;
	}
	else
	{
		return b - a;
	}
}

double sqrt_a(double a, double eps)
{
	if (a <= 0)
	{
		return -1;
	}

	double x1 = a;
	double xk;

	while (true)
	{
		xk = 0.5 * (x1 + a / x1);

		if (my_abs(xk, x1) < eps)
		{
			break;
		}

		x1 = xk;
	}


}

int main()
{
    std::cout << "Hello World!\n";
}
