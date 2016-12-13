/*
	Input: 5-digit number
	Otput: The digits of the number, separated by spaces
*/

//#include "stdafx.h" //skip this line if using Code::Blocks
#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "5-digit number: ";
	cin >> number;

	int firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit;

	firstDigit = number / 10000;
	secondDigit = (number / 1000) % 10;
	thirdDigit = (number / 100) % 10;
	fourthDigit = (number / 10) % 10;
	fifthDigit = number % 10;

	cout << firstDigit << " " << secondDigit << " " << thirdDigit << " " << fourthDigit << " " << fifthDigit<< endl;


    return 0;
}

