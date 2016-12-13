#include<iostream>
#include<cstring>
using namespace std;

int main () {
    char s1[201], s2[201];
    int p1, p2;

    cin >> s1 >> s2;

    p1 = strlen(s1)-1;
    p2 = strlen(s2)-1;

    while(true) {
        if(s1[p1] != s2[p2])
            break;

        if(p1 < 0 || p2 < 0)
            break;

        p1--;
        p2--;
    }

    ///cout << p1 << ' ' << p2;

    p1++;
    p2++;

    for(int i = p1; i < strlen(s1); i++)
        cout << s1[i];

    cout << endl;

    return 0;
}
