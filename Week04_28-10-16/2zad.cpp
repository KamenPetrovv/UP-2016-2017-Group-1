
/**
2. Въвеждате цяло число N и последователност от N реални числа
   Извеждате най-малкото и най-голямото от тях, разделени със запетая
*/

#include<iostream>
using namespace std;

int main() {

    int n;

    cout << "n: ";
    cin >> n;

    cout << n << " numbers: " << endl;

    int minNum, maxNum, current;

    minNum = 10000000000;
    maxNum = -10000000000;

    for(int i = 1; i <= n; i++) {
        cin >> current;

        if(current < minNum)
            minNum = current;

        if(current > maxNum)
            maxNum = current;
    }

    cout << minNum << ", " << maxNum << endl;

    return 0;
}
