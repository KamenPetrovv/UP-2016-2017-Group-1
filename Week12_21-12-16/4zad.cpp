#include<iostream>
using namespace std;

const int MAXN = 100;

bool findSquare(char a[MAXN][MAXN], int x, int y) {
    /// check if [x][y] is the top left corner of a 2x2 square of same elements

    return ( a[x][y] == a[x + 1][y]     &&
             a[x][y] == a[x + 1][y + 1] &&
             a[x][y] == a[x    ][y + 1] );
}

int countSquares(char a[MAXN][MAXN], int n, int m) {
    int counter = 0;

    for(int i = 0; i <= n - 2; i++)
        for(int j = 0; j <= m - 2; j++)
            if(findSquare(a, i, j))
                counter++;

    return counter;
}

int main() {
    int n, m;
    char a[MAXN][MAXN];

    cout << "Enter matrix sizes: ";
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    cout << countSquares(a, n, m) << "\n"; /// find the number of 2x2 squares of same elements

    return 0;
}
