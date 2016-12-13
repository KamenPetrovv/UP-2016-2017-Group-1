#include<iostream>
using namespace std;

bool binarySearch(int a[], int from, int to, int val) { /// again, the range that will be searched is [from, to)
    if(from + 1 == to)
        return (a[from] == val);

    int middle = (from + to) / 2;

    if(val < a[middle])
        return binarySearch(a, from, middle, val); /// recursive call for range [from, middle)

    else
        return binarySearch(a, middle, to, val);   /// recursive call for range [middle, to)
}

int main() {

    int a[] = {2, 4, 7, 9, 10, 11, 13, 19, 21, 23, 37, 49, 83, 96}; /// binary serach works on sorted sequences only!
    int length = 14;

    while(true) {
        int x;

        cout << "\n\n" << "Enter number to be searched: ";
        cin >> x;

        cout << ( (binarySearch(a, 0, length, x)) ? "found" : "not found") << endl; /// remember the ternary operator? ;)
    }

    return 0;
}
