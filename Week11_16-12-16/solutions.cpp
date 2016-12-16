#include<iostream>
using namespace std;

bool getXthBitOfN(int n, int x) { /// returns true(1) if the xth bit of n is a one, false(0) otherwise
    int operand = (1 << x); /// 2 to the power of x

    int result = (n & operand); /// the same as opearnd & n, & is commutative

    if(result != 0) return 1;
    else            return 0;

    /// return (n & (1<<x));
}

void setXthBitOfN(int &n, int x, bool value) {
    if(value) /// set the bit to one
        n = (n | (1 << x));

    else /// set the bit to zero
        n = (n & (~ (1 << x)));
}

void printAllSubsets(int a[], int length) {

    for(int bitMask = 0; bitMask < (1<<length); bitMask++) {
        /**
            here bitMask corresponds to some subset of a[]
            the i-th number of a[] is part of the current subset if and only if the i-th bit of bitMask is set
        */

        cout << "bitMask: " << bitMask << " <=> ";

        cout << "{ ";

        for(int j = 0; j < length; j++)
            if(1 == getXthBitOfN(bitMask, j))
                cout << a[j] << ' ';

        cout << " }\n";
    }
}

int main() {

    /// 2zad
    int n = 8;
    setXthBitOfN(n, 1, 1);
    cout << n << endl;

    cout << "\n\n\n";

    /// 3zad
    int mySet[5] = {1, 2, 3, 4, 5};
    printAllSubsets(mySet, 5);

    return 0;
}
