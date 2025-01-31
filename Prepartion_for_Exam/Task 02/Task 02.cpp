// Task 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Segement
{
	int x1;
	int y1;
	int x2;
	int y2;
	
};

bool areVerticals(Segement s1, Segement s2)
{
	return s1.x1 == s1.x2 && s2.x1 == s2.x2;
}

bool areHorizontals(Segement s1, Segement s2)
{
	return s1.y1 == s1.y2 && s2.y1 == s2.y2;
}

int findCommonPart(Segement s1, Segement s2)
{
	if (areHorizontals(s1, s2)){
		int xStart = s1.x1 > s2.x1 ? s1.x1 : s2.x1;
		int xEnd = s1.x2 < s2.x2 ? s1.x2 : s2.x2;

		return xStart < xEnd ? xEnd - xStart : 0;
	}
	else if (areVerticals(s1, s2)){
		int yStart = s1.y1 > s2.y1 ? s1.y1 : s2.y1;
		int yEnd = s1.y2 < s2.y2 ? s1.y2 : s2.y2;

		return yStart < yEnd ? yEnd - yStart : 0;
	}
	else{
		return -1;
	}
}

int main()
{
	
	Segement s1 = { 1, 2, 5, 2};
	Segement s2 = { 3, 2, 7, 2 };

	int result = findCommonPart(s1, s2);
	std::cout << result << std::endl;
}

