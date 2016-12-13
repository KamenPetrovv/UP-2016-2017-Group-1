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
    int largestSoFar = 1;
    int largest = 1;
    int biggestSum = 0;
    for(int i = 1; i < n;i++)
    {

        if(numbers[i - 1] <= numbers[i])
        {
            largestSoFar ++;
            sumSoFar += numbers[i];
        }
        else
        {
            if(largestSoFar > largest)
            {
                largest = largestSoFar;
                biggestSum = sumSoFar;
            }
            largestSoFar = 1;
            sumSoFar = numbers[i];
        }
    }

    if(largestSoFar > largest)
    {
        largest = largestSoFar;
        biggestSum = sumSoFar;
    }
    cout << "Length : " << largest << endl;
    cout << "Sum : " << biggestSum<< endl;


}
