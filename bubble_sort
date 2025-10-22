// Title: Program for Bubble Sort
// Author: ishma-cybsec

#include <iostream>
using namespace std;

int main() {
    int a[100], n, temp;

    cout << "How many elements: ";
    cin >> n;

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Bubble Sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array elements are: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
