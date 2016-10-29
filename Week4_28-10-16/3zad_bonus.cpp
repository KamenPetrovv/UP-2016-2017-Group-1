
/**
 Въвеждате цяло число от клавиатурата
 Извеждате сумата от цифрите му
 Примерен вход: 1900345
 Примерен изход: 22
*/

#include<iostream>
using namespace std;

int main() {

    int n, sumOfDigits;

    cout << "n: ";
    cin >> n;

    /**
        BONUS:
        Alternative solution to problem 3 just to show how we can use a for loop instead of while
        It is shorter but less understandable => 3zad.cpp is better
    */

    for(sumOfDigits = 0; n != 0; n /= 10) {
        sumOfDigits += n % 10;
    }

    cout << sumOfDigits << endl;

    return 0;
}
