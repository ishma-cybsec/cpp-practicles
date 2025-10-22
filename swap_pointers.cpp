// Title: Program to Swap Two Numbers Using Pointers
// Author: ishma-cybsec

#include <iostream>
using namespace std;

int main() {
    int a, b, *p1, *p2, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p1 = &a;
    p2 = &b;

    cout << "Before swapping: a=" << a << ", b=" << b << endl;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "After swapping: a=" << a << ", b=" << b << endl;

    return 0;
}
