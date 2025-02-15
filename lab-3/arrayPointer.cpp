#include <iostream>
using namespace std;

int main() {
    int NUMBER_ELEMENTS;

    // Get array size from user
    cout << "Enter the number of elements: ";
    cin >> NUMBER_ELEMENTS;

    // Validate input
    if (NUMBER_ELEMENTS <= 0) {
        cout << "Please enter a positive number" << endl;
        return 1;
    }

    // Allocate memory for array1
    short* array1 = new (nothrow) short[NUMBER_ELEMENTS];
    if (array1 == nullptr) {
        cout << "Memory allocation failed for array1" << endl;
        return 1;
    }

    // Fill array1 using pointer arithmetic
    for (short* ptr = array1; ptr < array1 + NUMBER_ELEMENTS; ptr++) {
        *ptr = ptr - array1;
    }

    // Calculate size of array2
    int size2 = NUMBER_ELEMENTS / 2;

    // Allocate memory for array2
    short* array2 = new (nothrow) short[size2];
    if (array2 == nullptr) {
        delete[] array1;
        cout << "Memory allocation failed for array2" << endl;
        return 1;
    }

    // Copy odd positions from array1 to array2 using pointers
    short* ptr2 = array2;
    for (short* ptr1 = array1 + 1; ptr1 < array1 + NUMBER_ELEMENTS; ptr1 += 2) {
        *ptr2++ = *ptr1;
    }

    // Print array1
    cout << "\nArray1 contents:" << endl;
    for (int i = 0; i < NUMBER_ELEMENTS; i++) {
        cout << array1[i] << " ";
    }

    // Print array2
    cout << "\n\nArray2 contents (odd positions from array1):" << endl;
    for (int i = 0; i < size2; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

    // Clean up memory
    delete[] array1;
    delete[] array2;

    return 0;
}

