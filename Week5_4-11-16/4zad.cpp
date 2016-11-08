/**
*/
#include<iostream>
using namespace std;

int countSevens(int n) {
    int sevensCount = 0;

    while(n > 0) {
        if(n % 10 == 7)
            sevensCount++;

        n /= 10;
    }

    return sevensCount;
}

int main()
{
    int current;
    int maxSevensCount = -1, answer;

    while(true){
        cin >> current;

        if(current == -1)
            break;

        int currentSevensCount = 0;

        currentSevensCount = countSevens(current);

        if(currentSevensCount > maxSevensCount) {
            maxSevensCount = currentSevensCount;
            answer = current;
        }
    }

    cout << "The number with most sevens is: " << answer << endl;


    return 0;
}
