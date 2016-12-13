
//Smallest number in an array between a given range

/**
Напишете програма, която прочита естествено число n.
След това n на брой реални числа, които записва в масив.
След това прочита q - брой заявки и самите заявки.
Една заявка представлява две числа a, b между 0 и n-1.
За всяка заявка да се даде отговор - кое е най-малкото число в масива, намиращо се между индексите a и b.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

double smallestNumberInArray(double nums[], int a, int b)// We don`t know the array's length. Usually we pass it as a parameter (... ,int size) but we don`t need it now
{
	double smallest = nums[a]; // Make the first number in the range [a,b] the smallest

	for (int i = a + 1; i <= b; i++) // Start from the first in the range + 1
	{
		if (nums[i] < smallest) // If the current element is smaller than the ones found so far
		{
			smallest = nums[i]; // then replace it
		}
	}
	return smallest;
}

int main()
{
	int n;
	cin >> n; // Get n

	double nums[100];// Array of real numbers

	for (int i = 0; i < n; i++) // Get n-times
	{
		cin >> nums[i]; // numbers from the keyboard
	}

	int q;
	cin >> q;

	int a, b;

	for (int i = 0; i < q; i++) // Q-times
	{
		cin >> a >> b; // read two numbers a and b
		cout << smallestNumberInArray(nums, a, b); // and cout the smallest in the range a b
	}

    return 0;
}

