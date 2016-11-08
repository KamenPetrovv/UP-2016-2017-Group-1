#include<iostream>
using namespace std;
// Разбийте четирицифрено число на цифрите му
int main()
{
    int n;
    cin>> n;
    int fn = n/1000;
    int sn = (n/100)% 10;
    int tn = (n/10)%10;
    int Fn = n%10;
    cout << fn <<endl;
    cout << sn <<endl;
    cout << tn <<endl;
    cout << Fn <<endl;
    return 0;
}
