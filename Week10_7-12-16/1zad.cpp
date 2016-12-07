#include<iostream>
using namespace std;

int fact(int n)
{
    if ( n == 1) return 1;
    cout<< n << "*" << "fact(" << n - 1<< ")" <<endl;
    return n * fact(n - 1);
}

long fibboRec(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fibboRec(n-1) + fibboRec(n - 2);
    }
}
void getFibboNums (long n, long arr[])
{
    arr[0] = 1;
    arr[1] = 1;
    for(long i = 2; i < n; i ++)
    {
        arr[i] = arr[i-1] + arr[i - 2];
    }

}

void bubbleSort(long a[100], long length) {
    bool change;

    do {
        change = false;

        for(long i = 0; i < length; i++)
            if(a[i] > a[i+1]) {
                long tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
                change = true;
            }
    }while(change);
}

void selectionSort(long a[], long length) {
    for(long i = 0; i < length; i++) {
        long minIndex = i;

        for(long j = i+1; j < length; j++)
            if(a[j] < a[minIndex])
                minIndex = j;

        long tmp = a[minIndex];
        a[minIndex] = a[i];
        a[i] = tmp;
    }
}

int main() {
    int b = fact(1);
    cout << b <<endl;
    cout << fibboRec(40);
    long fibbo[100];
    getFibboNums(100, fibbo) ;
    for(long i = 0; i < 100; i ++)
    {
        cout << fibbo[i] <<endl;
    }

    ///testing
    long a[10] = {1, 0, 2, 9, 3, 8, 4, 7, 5, 6};
    selectionSort(a, 10);

    for(long i = 0; i < 10; i++)
        cout << a[i] << ' ';

    return 0;
}
