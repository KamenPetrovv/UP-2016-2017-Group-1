
/**
    5. Приема от клавиатурата две цели числа 0 <= a <= b и извежда тези цели числа от [a; b],
    които се делят на последната си цифра.
    Бонус: форматирайте изхода като множество.

    Пример вход: 5 31
    Пример изход: {5, 6, 7, 8, 9, 11, 12, 15, 21, 22, 24, 25, 31}

    Пример вход: 5 5
    Пример изход: {5}

    Пример вход: 49 50
    Пример изход: {}
*/

/**
    Below is a solution to the bonus problem
*/

#include<iostream>
using namespace std;

int main() {

    int a, b;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << "{";

    bool atLeastOneNumberPrinted = false;

    for(int i = a; i <= b; i++) {

        int lastDigit = i % 10;


        if(lastDigit == 0)
            continue;

        if(i % lastDigit == 0) {

            if(atLeastOneNumberPrinted == false)
                cout << i;

            if(atLeastOneNumberPrinted == true)
                cout << ", " << i;

            atLeastOneNumberPrinted = true;
        }
    }

    cout << "}" << endl;

    return 0;
}
