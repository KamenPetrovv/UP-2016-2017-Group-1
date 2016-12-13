// Read three numbers, output whether they are the sides of an existing triangle

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Input three numbers: ";
	cin >> a >> b >> c;

	if (!(a + b > c) || !(b + c > a) || !(a + c > b))
	{
		cout << "Such triangle does not exist" << endl;
	}
	else
	{
		cout << "Such triangle exists" << endl;
	}

    return 0;
}

