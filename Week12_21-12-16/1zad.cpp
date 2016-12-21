#include<iostream>
using namespace std;

const int MAXN = 100;

void printUnderDiag(int a[MAXN][MAXN], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++)
            cout << a[i][j] << ' ';

        cout << "\n";
    }
}

int main() {

    int n, m;
    int a[MAXN][MAXN];

    cout << "Enter matrix size: ";
    cin >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    printUnderDiag(a, n);

    return 0;
}
