#include<iostream>
using namespace std;


int main()
{
	int numbers[200];
	int k;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> numbers[i];
	}
	int result[100];
	for (int first = 0, second = k/2 - 1; first < k / 4; first++, second--)
	{
		cout << k/4 - 1 - first << " = "<<first << " + " << second << endl;
		cout << first + k/4 << " = "<<first + k/2 << " + " << second + k/2 << endl;
        cout << "-------------"<<endl;
		result[k / 4 - 1 - first] = numbers[first] + numbers[second];
		result[first + k / 4] = numbers[first + k / 2] + numbers[second + k / 2];
	}

	for (int i = 0; i < k / 2; i++)
	{
		cout << result[i] << " ";
	}
    return 0;
}
