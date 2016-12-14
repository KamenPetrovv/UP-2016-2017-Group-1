
#include<iostream>
using namespace std;

void squreElements (int a[],int from, int to)
{
    if(from > to) return;
    a[from] = a[from] * a[from];
    squreElements(a,from + 1,to);
}

int main() {

    int arr[10] = {0, 1, 2 ,3 ,4 ,5 ,6 ,7, 8, 9};
    squreElements(arr,5 , 9);
    for(int i=0; i < 10; i ++)
    cout << arr[i] << endl;
}
