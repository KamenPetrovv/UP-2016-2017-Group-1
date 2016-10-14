// Zad 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if (x3 >= x1 && x3 <= x2 
		&& 
		y3 >= y1 && y3 <= y2 )
	{
		cout << "Inside" << endl;
	}
	else
	{
		cout << "Outside" << endl;
	}
    return 0;
}

