#include<iostream>
using namespace std;

void merge(int arr1[], int from1, int to1, int arr2[], int from2, int to2, int result[]) {
    int ind1, ind2, put;

    ind1 = from1; /// position to read from in arr1[]
    ind2 = from2; /// posiiton to read from in arr2[]
    put = 0;      /// position to write to in result[]

    while(ind1 < to1 && ind2 < to2) {

        if(arr1[ind1] < arr2[ind2])
            result[put++] = arr1[ind1++];

        else
            result[put++] = arr2[ind2++];

        /** above line is short (eqivalent) syntax for:

            result[put] = arr2[ind2];
            put++;
            ind2++;

            such short forms are also used below
        */
    }

    ///in case one of arr1[] or arr2[] was longer, then there would be some elements that still need to be added to result[]

    while(ind1 < to1)
        result[put++] = arr1[ind1++];

    while(ind2 < to2)
        result[put++] = arr2[ind2++];
}

void mergeSort(int a[], int from, int to) { ///sorts the elements of a[] in range [from, to) ///notice from is included in the range, to is not

    ///base of the recursion / mathematical induction
    if(to - from <= 1)
        return; ///a range of length 1 or less is always sorted, no need to do anything

    int middle = (from + to) / 2;

    mergeSort(a, from, middle); /// recursive call for range [from, middle)
    mergeSort(a, middle, to);   /// recursive call for range [middle, to)

    ///left and right halves of a[] are sorted, merge them
    int tmp[1000];
    merge(a, from, middle, a, middle, to, tmp);

    ///the merged version of the array is now in tmp[], copy it back to a[]

    for(int i = from; i < to; i++)
        a[i] = tmp[i - from];
}

int main() {

    int a[] = {6, 5, 7, 4, 8, 3, 9, 2, 0, 1};
    int length = 10;

    mergeSort(a, 0, length);

    for(int i = 0; i < length; i++) {
        cout << a[i] << ' ';
    }
    cout << "\n";

    return 0;
}
