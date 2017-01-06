#include<iostream>
using namespace std;

int* arr;
int elemCount, size;

int getUserCommand() {
    int command;

    cout << "\t" << "1. Get elements count\n";
    cout << "\t" << "2. Get size\n";
    cout << "\t" << "3. Print array\n";

    cout << "\t" << "4. Get element at index\n";
    cout << "\t" << "5. Set element at index\n";

    cout << "\t" << "6. Add element to the back\n";

    cout << "\t" << "7. Exit\n";
    cout << "\t" << "Input your choice: ";

    cin >> command;

    return command;
}

int main() {
    int command;

    do {
        command = getUserCommand();

        switch(command) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            default:
        }

        cout << endl << endl;
    }while(command != 7);

    return 0;
}
