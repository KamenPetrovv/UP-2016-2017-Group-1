#include<iostream>
using namespace std;

int n, a[10010], b;
bool visited[10010];

void readInput() {
    cin >> n;

    for(int i = 1; i <= n; i++) {
        visited[i] = false;
        cin >> a[i];
    }

    cin >> b;
}

int main () {

    readInput();

    int pos = b;
    bool infiniteLoop = false;
    int step = 1;

    cout << "\tStep#" << step << ": " << pos << "\n";

    do {
        pos = a[pos];

        if(visited[pos])
            infiniteLoop = true;

        visited[pos] = true;

        step++;

        cout << "\tStep#" << step << ": " << pos << "\n";
    }while(pos != b && !infiniteLoop);

    if(infiniteLoop)
        cout << "Infinite loop\n";

    else
        cout << "Total steps: " << step << "\n";

    return 0;
}
