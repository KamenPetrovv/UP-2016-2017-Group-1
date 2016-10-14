// Zad 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	int firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit;
	cout << "Hello!";
	firstDigit = number / 10000;
	secondDigit = (number / 1000) % 10;
	thirdDigit = (number / 100) % 10;
	fourthDigit = (number / 10) % 10;
	fifthDigit = number % 10;
	cout << firstDigit << " " << secondDigit << " " << thirdDigit << " " << fourthDigit << " " << fifthDigit<< endl;


    return 0;
}

