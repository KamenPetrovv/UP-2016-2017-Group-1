#include<iostream>
using namespace std;

const int MAXN = 100;

void transpose(int a[MAXN][MAXN], int& n, int& m) {
    for(int i = 0; i < max(n, m); i++)
        for(int j = 0; j < i; j++)
            swap(a[i][j], a[j][i]);
    /// go through all elements below the diagonal and swap them with their corresponding ones

    swap(n, m);
}

int main() {
    int n, m;
    int a[MAXN][MAXN];

    cout << "Enter matrix sizes: ";
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    transpose(a, n, m); /// transpose a non-square matrix

    cout << "\n\nTransposed matrix:\n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << "\n";
    }

    return 0;
}
