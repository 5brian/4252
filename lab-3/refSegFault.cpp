#include <iostream>
using namespace std;

// The local variable is destroyed when the function returns, leading to a dangling reference
// Any attempt to use the returned reference will result in undefined behavior
int& getRefVar() {
    int localVar = 42;
    return localVar;
}

int main() {
    // Example 1: Segmentation fault using null reference
    int* ptr = nullptr;
    int& ref = *ptr;  // This will cause a segmentation fault
    cout << ref << endl;

    // Example 2: Using dangling reference
    int& danglingRef = getRefVar();
    cout << danglingRef << endl;  // Undefined behavior

    return 0;
}

