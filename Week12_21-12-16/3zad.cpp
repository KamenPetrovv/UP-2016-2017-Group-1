#include<iostream>
using namespace std;

const int MAXN = 100;

int sumDiag1(int a[MAXN][MAXN], int n) { /// the sum of the elements on the main diagonal
    int result = 0;

    for(int i = 0; i < n; i++)
        result += a[i][i];

    return result;
}

int sumDiag2(int a[MAXN][MAXN], int n) { /// the sum of the elements on the secondary diagonal
    int result = 0;

    for(int i = n-1, j = 0; i >= 0; i--, j++)
        result += a[i][j];

    return result;
}

int diagDifference(int a[MAXN][MAXN], int n) {
    return sumDiag1(a, n) - sumDiag2(a, n);
}


int main() {
    int n, m;
    int a[MAXN][MAXN];

    cout << "Enter matrix size: ";
    cin >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << diagDifference(a, n) << "\n";

    return 0;
}
