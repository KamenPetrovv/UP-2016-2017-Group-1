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

	for(int i = k-1; i > 0 ; i--)
        cout << numbers[i] << ' ';

    return 0;
}
