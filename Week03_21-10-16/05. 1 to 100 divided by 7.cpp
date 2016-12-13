
#include<iostream>
using namespace std;
// Изведете числата от 1 до 100, завършващи на 7
int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if( i % 10 == 7)
        {
            cout<< i << endl;
        }
    }
}

