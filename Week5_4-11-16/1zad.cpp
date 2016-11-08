/**
TODO add problem statement
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    int zeroes, ones;
    cin >>n;

    zeroes = ones = 0;

    while(n > 0) {
        if(n%2 == 0) {
            zeroes++;
            cout << n%2 <<' ';
        }else {
            ones++;
            cout << n%2 << ' ';
        }

        n = n/2;
    }

    if(ones > zeroes) {
        cout << "More ones" << endl;
        return 0;
    }

    if(ones < zeroes) {
        cout << "More zeroes" << endl;
        return 0;
    }

    cout << "Equal number of ones and zeroes" << endl;

    return 0;
}
