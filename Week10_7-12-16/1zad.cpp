#include<iostream>
using namespace std;

void bubbleSort(int a[100], int length) {
    bool change;

    do {
        change = false;

        for(int i = 0; i < length; i++)
            if(a[i] > a[i+1]) {
                int tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
                change = true;
            }
    }while(change);
}

void selectionSort(int a[], int length) {
    for(int i = 0; i < length; i++) {
        int minIndex = i;

        for(int j = i+1; j < length; j++)
            if(a[j] < a[minIndex])
                minIndex = j;

        int tmp = a[minIndex];
        a[minIndex] = a[i];
        a[i] = tmp;
    }
}

int main() {

    ///testing
    int a[10] = {1, 0, 2, 9, 3, 8, 4, 7, 5, 6};
    selectionSort(a, 10);

    for(int i = 0; i < 10; i++)
        cout << a[i] << ' ';

    return 0;
}
