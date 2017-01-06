#include<iostream>
using namespace std;

/// arr, elemCount and size are public variables in order to be easily accessible
/// generally not a good practice
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

void printArray() {
    cout << "Array: ";

    for(int i = 0; i < elemCount; i++)
        cout << *(arr + i) << ' ';

    cout << endl;
}

void getElement() {
    int index;

    cout << "Input index: ";
    cin >> index;

    if(0 <= index && index < elemCount)
        cout << "Array[" << index << "] = " << *(arr + index) << endl;

    else
        cout << "Invalid index" << endl;
}

void setElement() {
    int index, value;

    cout << "Input index: ";
    cin >> index;

    if(0 <= index && index < elemCount) {
        cout << "Input Array[" << index << "]: ";
        cin >> value;

        *(arr + index) = value;
    }

    else
        cout << "Invalid index" << endl;
}

void addToBack() {
    int value;

    cout << "Input value to be added to the back: ";
    cin >> value;

    if(elemCount < size) { /// there is enough memory for the addition
        *(arr + elemCount) = value;
        elemCount++;
    }

    else { /// elemCount == size, more memory needs to be allocated for the addition

        int* newStorage = new int[size * 2];

        for(int i = 0; i < size; i++)
            *(newStorage + i) = *(arr + i);

        delete[] arr; /// free the memory previously allocated for our array
        arr = newStorage;
        size *= 2;

        *(arr + elemCount) = value;
        elemCount++;
    }
}

int main() {
    int command;

    elemCount = 0;
    size      = 1;
    arr       = new int[1];
    /// initially our array has space for 1 elemnt, but contains no elements

    do { command = getUserCommand();

        switch(command) {
            case 1:
                cout << "Array elements count: " << elemCount << endl;
                break;

            case 2:
                cout << "Array size: " << size << endl;
                break;

            case 3:
                printArray();
                break;

            case 4:
                getElement();
                break;

            case 5:
                setElement();
                break;

            case 6:
                addToBack();
                break;

            default: /// case 7
                cout << "Goodbye!" << endl;
                delete[] arr; /// free the dynamic memory our program has used
                break;
        }

        cout << endl << endl;
    }while(command != 7);

    return 0;
}
