
/**
1. Стамат иска да кара кънки на лед за X часа,
 Ценоразписът за час в Зимния дворец е следния:
      Понеделник 6
      Вторник    6
      Сряда      4.50
      Четвъртък  6
      Петък      6
      Събота     7.25
      Неделя     7.25
  От клавиатурата въвеждате:
    -ден от седмицата като 1=Понеделник, ..., 7=Неделя
    -реално число X, брой часове
  На екрана изведете колко трябва да плати Стамат.
  Използвайте оператора switch!
*/

#include<iostream>
#include<iomanip> ///this header file is needed only for the bonus output
using namespace std;

int main() {

    short day;
    double hours;
    double lvPerHour;

    cout << "Day: ";
    cin >> day;
    cout << "Hours: ";
    cin >> hours;

    ///two variants of the switch operator shown below, any one is correct

    ///switch typical use below
    switch(day) {
        case 1:
            lvPerHour = 6;
            break;

        case 2:
            lvPerHour = 6;
            break;

        case 3:
            lvPerHour = 4.5;
            break;

        case 4:
            lvPerHour = 6;
            break;

        case 5:
            lvPerHour = 6;
            break;

        case 6:
            lvPerHour = 7.25;
            break;

        case 7:
            lvPerHour = 7.25;
            break;

        default:
            cout << "Error: invalid value provided for day" << endl;
            return 1; ///returning 1 instead of 0, because an error has been encountered
    }

    ///switch 'trick' for the particular problem
    switch(day) {
        case 1:
        case 2:
        case 4:
        case 5:
            lvPerHour = 6; ///comon block of code for four of the cases
            break;

        case 3:
            lvPerHour = 4.50;
            break;

        case 6:
        case 7:
            lvPerHour = 7.25; ///common code for two of the cases
            break;

        default:
            cout << "Error: invalid value provided for day" << endl;
            return 1;
    }

    cout << "Price to pay: " << hours * lvPerHour << endl;

    /**
        BONUS:
        The output of this problem is a sum of money => only two digits after the decimal point are menaningful
        If we want to round the answer up to two decimal places, we need to use the following manipulator
    */
    cout << "Price to pay: " << setiosflags(ios::fixed) << setprecision(2) << hours * lvPerHour << endl;
    /** If you want to learn more about this, check out c++ output manipulators
    */

    return 0;
}
