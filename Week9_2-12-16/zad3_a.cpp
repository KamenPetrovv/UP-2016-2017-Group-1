#include<iostream>
using namespace std;

int n, m;
const int MAXN = 100;
const int MAXM = 100;

int a[MAXN][MAXM]; // = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

int main()
{
    int i, j;

    cin >> n >> m;

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++)
            cin >> a[i][j];

    for(i = 0; i < n; i++) {
        bool zeroFound = false;

        for(j = 0; j < m; j++)
            if(a[i][j] == 0) {
                zeroFound = true;
                break;
            }

        if(!zeroFound) {
            for(j = 0; j < m; j++) {
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}
