/**
Напишете програма, която приема естествено число (3 <= n) от клавиатурата и извежда 'елхичка' с размер n.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{

		for (int p = 0; p < n - i - 1; p++)
		{
			cout << " ";
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;

	}
	for (int i = 0; i < n - 1; i++)
	{
		cout << " ";
	}
	cout << "*" << endl;
	for (int i = 0; i < n - 1; i++)
	{
		cout << " ";
	}
	cout << "*" << endl;


    return 0;
}

