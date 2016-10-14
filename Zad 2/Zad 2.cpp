// Zad 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (!(a + b > c) || !(b + c > a) || !(a + c > b))
	{
		cout << "false" << endl;
	}
	else
	{
		cout << "true" << endl;
	}
    return 0;
}

