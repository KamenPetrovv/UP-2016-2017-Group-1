/**
enter a number
check if it is perfect or not (search the net for what a perfect number is)
*/
#include<iostream>
using namespace std;

bool isPerfect(int n) {
    int divSum = 0;
    for(int div = 1; div < n; div++) {
        if(n % div == 0) { //div is a divisor of n
            divSum += div;
        }
    }

    if(n == divSum)
        return true;
    else
        return false;
}

int main()
{
    int n;
    int divSum = 0;
    int perfectsFound = 0;

    //cin >> n;

    for(int i=1; ; i++) {
        if(isPerfect(i)) {
            perfectsFound++;

            if(perfectsFound == 5) {
                cout << i << endl;
                break;
            }
        }
    }

    //cout << isPerfect(n) << endl;


    return 0;
}
