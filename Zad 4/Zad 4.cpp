// Zad 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int year;
	cin >> year;
	bool isLeapYear = (year % 4 == 0 
			&&
		(
			(
				(year % 100 == 0) 
				&& 
				(year % 400 == 0)
			) 
			|| 
			(year % 100 != 0)
		)
		
	);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "It is a leap year" << endl;
			}
			else
			{
				cout << "Not a leap year." << endl;
			}
		}
		else
		{
			cout << "It is a leap year" << endl;
		}
	}
	else
	{
		cout << "Not a leap year." << endl;
	}
    return 0;
}

