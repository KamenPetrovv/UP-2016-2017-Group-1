
/**
    4. Въвеждате от клавиатурата две цели числа 0 <= a <= b
    Извежда общата сумата от цифрите на всички числа в интервала (a; b)
    Примерен вход: 94 105
    Примерен изход: 95
*/

#include<iostream>
using namespace std;

int main() {

    int a, b, totalSum = 0;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    for(int current = a+1; current < b; current++) { ///notice the interval (a; b) is not inclusive

        int currentCopy = current; ///make a copy of current in order no to lose its value after the while loop

        while(currentCopy != 0) {
            totalSum = totalSum + currentCopy % 10;

            currentCopy = currentCopy / 10;
        }
    }

    cout << "totalSum: " << totalSum << endl;

    return 0;
}
