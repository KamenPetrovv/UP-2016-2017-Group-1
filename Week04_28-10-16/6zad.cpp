
/**
    6. Бонус
    Въвеждате естествено число n
    Проверявате дали то е палиндром.

    Пояснение: едно число се нарича палиндром ако се чете еднакво отляво надясно и отдясно наляво

    Примери:
        121 - palindrome
        122 - not a palindrome
        777898777 - palindrome
        10 - not a palindrome
*/


#include<iostream>
using namespace std;

int main() {

    int n, copyN, reverseN;

    cout << "n: ";
    cin >> n;

    ///Solution idea: reverse the number and check if it equals its initial value

    copyN = n;
    reverseN = 0;

    while(n != 0) {
        reverseN = 10 * reverseN + n % 10;
        n /= 10;
    }

    if(copyN == reverseN)
        cout << "palindrome" << endl;
    else
        cout << "not a palindrome" << endl;

    return 0;
}
