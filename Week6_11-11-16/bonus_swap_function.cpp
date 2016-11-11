#include<iostream>
using namespace std;

void swap(int a, int b) { ///arguments are passed by value => we see no result from this function

    cout << "Swapping a and b" << endl;

    int tmp = a;
    a = b;
    b = tmp
}

void swap2(int &a, int &b) { ///arguments are passed by reference (marked by &) => works as expected

    cout << "Swapping a and b" << endl;

    int tmp = a;
    a = b;
    b = tmp;
}

int main() {


    int x = 5, y = 6;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl << endl;

    swap(x, y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

