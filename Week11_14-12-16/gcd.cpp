#include<iostream>
using namespace std;

/// both gcd_iter and gcd_rec implement the substraction-based Euclidean algorithm
/// a faster, division-based version of this algorithm also exists

int gcd_iter(int a, int b) { /// iterative solution
    while(a != b) {
        if(a > b)
            a -= b;

        else
            b -= a;
    }

    return a;
}

int gcd_rec(int a, int b) { /// recursive solution
    if(a == b)
        return a;

    if(a > b)
        return gcd_rec(a - b, b);

    else
        return gcd_rec(a , b - a);
}



int main() {

    while(true) {
        int a, b;

        cout << "\n\n" << "Enter two numbers: ";
        cin >> a;
        cin >> b;

        cout << "gcd_iter(" << a << ", " << b <<") = " << gcd_iter(a, b) << endl;
        cout << "gcd_rec (" << a << ", " << b <<") = " << gcd_rec (a, b) << endl;
    }

    return 0;
}
