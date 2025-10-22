// Title: Program for Traversing Array Using Pointer
// Author: ishma-cybsec

#include <iostream>
using namespace std;

int main() {
    int a[5] = {11, 22, 33, 44, 55};
    int *ptr;
    int sum = 0;

    ptr = a;

    cout << "Traversing array using pointer:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Address of " << *ptr << " is " << ptr << endl;
        sum += *ptr;
        ptr++;
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
