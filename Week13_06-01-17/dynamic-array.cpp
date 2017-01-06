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
    cout << "\t" << "7. Insert element at index\n";

    cout << "\t" << "8. Exit\n";
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

void resizeArr() {
    int* newStorage = new int[size * 2];

    for(int i = 0; i < size; i++)
        *(newStorage + i) = *(arr + i);

    delete[] arr; /// free the memory previously allocated for our array
    arr = newStorage; /// make array point to the new storage in memory
    size *= 2;
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
        resizeArr();

        *(arr + elemCount) = value;
        elemCount++;
    }
}

void swapElements(int* p1, int* p2) {
    int t = *p1;
    *p1 = *p2;
    *p2 = t;
}

void insertElement() {
    int index, value;

    cout << "Input index: ";
    cin >> index;

    if(0 <= index && index < elemCount) {
        cout << "Input Array[" << index << "]: ";
        cin >> value;

        if(elemCount == size)
            resizeArr();

        *(arr + elemCount) = value;
        elemCount++;

        for(int i = elemCount - 1; i > index; i--)
            swapElements(arr + i, arr + i - 1);
    }

    else
        cout << "Invalid index" << endl;
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

            case 7:
                insertElement();
                break;

            default: /// case 8
                cout << "Goodbye!" << endl;
                delete[] arr; /// free the dynamic memory our program has used
                break;
        }

        cout << endl << endl;
    }while(command != 8);

    return 0;
}
