#include<iostream>
#include<iomanip>
using namespace std;

const int MAXN = 100;

void fillA(int a[MAXN][MAXN], int n) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            a[i][j] = i*n + j + 1;
}

void fillB(int a[MAXN][MAXN], int n) {
    int put = 1;

    for(int j = 0; j < n; j++) {
        if(j % 2 == 0)
            for(int i = 0; i < n; i++)
                a[i][j] = put++;

        else
            for(int i = n - 1; i >= 0; i--)
                a[i][j] = put++;
    }
}

void fillC(int a[MAXN][MAXN], int n) {
    int put = 1;

    for(int j = 0; j < n; j++)
        for(int i = 0; i <= j; i++)
            a[i][j - i] = put++;

    for(int i = 1; i < n; i++)
        for(int j = 0; j < n - i; j++)
            a[i + j][n - j - 1] = put++;
}

void fillD(int a[MAXN][MAXN], int n) {
    for(int i= 0; i < n; i++)
        for(int j = 0 ; j < n; j++)
            a[i][j] = 0;

    int put = 1, x = 0, y = 0;

    while(put < n * n) {
        while(y + 1 < n  && !a[x  ][y+1]) a[x  ][y++] = put++;
        while(x + 1 < n  && !a[x+1][y  ]) a[x++][y  ] = put++;
        while(y - 1 >= 0 && !a[x  ][y-1]) a[x  ][y--] = put++;
        while(x - 1 >= 0 && !a[x-1][y  ]) a[x--][y  ] = put++;
    }

    a[x][y] = put;
}



int main() {
    int n;
    int a[MAXN][MAXN];

    cout << "Enter matrix size: ";
    cin >> n;

    /// uncomment the line of the subtask you want to see

    /// fillA(a, n);
    /// fillB(a, n);
    /// fillC(a, n);
    fillD(a, n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << setw(3) << a[i][j] << ' ';
        cout << "\n";
    }


    return 0;
}
