
/**
 Въвеждате цяло число от клавиатурата
 Извеждате сумата от цифрите му
 Примерен вход: 1900345
 Примерен изход: 22
*/

#include<iostream>
using namespace std;

int main() {

    int n, sumOfDigits = 0;

    cout << "n: ";
    cin >> n;

    while(n != 0) {
        sumOfDigits += n % 10; ///this is short syntax for sumOfDigits = sumOfDigits + n % 10;

        n /= 10; ///short syntax for n = n / 10;
    }

    cout << sumOfDigits << endl;

    return 0;
}
