#include<iostream>
using namespace std;

bool hasDigit(int n, int k) {
    if(n == 0)
        return false;

    if(n % 10 == k)
        return true;

    return hasDigit(n / 10, k);
}

bool monotonouslyDecreases(int* a, int length) {
    if(length <= 1)
        return true;

    if(a[0] < a[1]) /// *a < *(a+1)
        return false;

    return monotonouslyDecreases(a+1, length-1);
}


bool findElement(int element, int a[], int length) {
    if(length == 0)
        return false;

    if(a[0] == element)
        return true;

    return findElement(element, a+1, length-1);
}

bool hasOnlyDifferentElements(int a[], int length) {
    if(length <= 1)
        return true;

    if(findElement(a[0], a + 1, length - 1))
        return false;

    return hasOnlyDifferentElements(a + 1, length - 1);
}

int addFirst (int*, int);
int multFirst(int*, int);


int addFirst(int a[], int length) {
    if(length == 1)
        return a[0];

    return a[0] + multFirst(a + 1, length - 1);
}

int multFirst(int a[], int length) {
    if(length == 1)
        return a[0];

    return a[0] * addFirst(a + 1, length - 1);
}

int main() {
    /// 1 zad
    /**
    cout << hasDigit(134234, 4) << "\n";
    cout << hasDigit(134234, 8) << "\n";
    cout << hasDigit(134234, 0) << "\n";
    */

    /// 2 zad
    /**
    int a[5] = {89,45,23,7,8};
    cout << monotonouslyDecreases(a, 5) << "\n";
    */

    /// 3 zad
    /**
    int a[5]= {1,2,3,4,5};
    int b[5]= {1,2,1,0,5};
    int c[5]= {1,1,1,2,1};

    cout << hasOnlyDifferentElements(a, 5) << "\n"; /// true
    cout << hasOnlyDifferentElements(b, 5) << "\n"; /// false
    cout << hasOnlyDifferentElements(c, 5) << "\n"; /// false
    */

    /// 4 zad
    /// findElement

    /// 5 zad
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    cout << addFirst(a, 7) << "\n";

    int b[1] = {7};
    cout << multFirst(b,1) << "\n";

    return 0;
}
