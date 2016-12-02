#include<iostream>
using namespace std;
const int MAX_LENGTH = 200;
int main()
{
    int n;
    cin >> n;
    int numbers[MAX_LENGTH];

    for(int i = 0; i < n ; i ++)
    {
        cin >> numbers[i];
    }
    int sumSoFar = numbers[0];
    int biggestSoFar = 1;
    int biggest = 1;
    int biggestSum = 0;
    for(int i = 1; i < n;i++)
    {
    cout << sumSoFar<<endl;
        if(numbers[i - 1] <= numbers[i])
        {
            biggestSoFar ++;
            sumSoFar += numbers[i];
        }
        else
        {
            if(biggestSoFar > biggest)
            {
                biggest = biggestSoFar;
                biggestSum = sumSoFar;
            }
            biggestSoFar = 1;
            sumSoFar = numbers[i];
        }
    }

    if(biggestSoFar > biggest)
    {
        biggest = biggestSoFar;
        biggestSum = sumSoFar;
    }
    cout << "Length : " << biggest << endl;
    cout << "Sum : " << biggestSum<< endl;


}
