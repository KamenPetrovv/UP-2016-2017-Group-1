#include<iostream>
using namespace std;
// ��������� ��������, ����� �������� �������� �� ��������� ��-�, �������� � ������������� �� a, b, c
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    double D; // ������� ���������������
    if(a != 0)
    {
         D = b*b - 4*c*a;
    }
    if(a ==0)// ����������� ���� � 0, ������ �� ���� �� ����� �� 0 ��� �����.
    {
        if(b == 0)
        {
            if(c == 0)
            {
                cout << "Vsqko x e resh" <<endl;
            }
            else
            {
                cout << "Nqma resh" << endl;
            }
        }
        else
        {
            cout << "x = " << -c / b;
        }
    }
    else if(D == 0)
    {
        cout<<"x1 = x2 = " << -b/(2 * a)<<endl;
    }
    else if (D < 0)
    {
        cout<< "Nqma realni koreni" <<endl;
    }
    else if (D > 0)
    {
        cout<<"x1 = " << (-b - D)/(2 * a)<<endl;

        cout<<"x2 = " << (-b +D)/(2 * a)<<endl;
    }
}
