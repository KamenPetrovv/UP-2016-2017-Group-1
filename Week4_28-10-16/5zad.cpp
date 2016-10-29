
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

#include<iostream>
using namespace std;

int main() {

    int a, b;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    for(int i = a; i <= b; i++) { ///this time the interval [a; b] is inclusive

        int lastDigit = i % 10;


        if(lastDigit == 0) {
            continue; /// skip all other operators till the end of current iteration of the loop

            /**
                if we forget this check and land on a number ending in 0 we would attempt to divide by zero and our program will crash
            */
        }

        if(i % lastDigit == 0)
            cout << i << ' ';
    }

    cout << endl;

    return 0;
}
