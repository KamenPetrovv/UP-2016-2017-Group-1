/* Input: year
	Output: is it a leap year?
*/

#include <iostream>
using namespace std;

int main()
{
	int year;

	cout << "Year: ";
	cin >> year;

	//Solution1 below:
	bool isLeapYear = ( (year%400 == 0) || (year%100 != 0 && year%4 == 0) );
	cout << isLeapYear << endl; //will output "0" (false) or "1" (true)

	//Solution2 below:

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

