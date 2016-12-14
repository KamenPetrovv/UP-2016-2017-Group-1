#include<iostream>
using namespace std;

long long power(int base, int exponent) {
    if(exponent == 0)
        return 1; /// base of the recursion

    return base * power(base, exponent-1);
}

long long fast_pow(int b, int e) {
    cout << b << " " << e << endl;

    if(e == 0)
        return 1;

    if(e % 2 == 0) {
        /// return fast_pow(b, e/2) * fast_pow(b, e/2); /// this would make the function as slow as power (linear time)

        long long r = fast_pow(b, e/2);
        return r * r;
    }

    else return fast_pow(b, e-1) * b;
}

int main() {

    int b,e;

    cin >> b >> e;

    cout << fast_pow(b,e) << endl;



    return 0;
}
