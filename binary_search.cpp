// Title: Program for Binary Search
// Author: ishma-cybsec

#include <iostream>
using namespace std;

int main() {
    int a[100], n, lb, ub, mid, ele, i;

    cout << "How many elements: ";
    cin >> n;

    cout << "Enter array elements (in ascending order): " << endl;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to be searched: ";
    cin >> ele;

    lb = 0;
    ub = n - 1;
    mid = (lb + ub) / 2;

    while (lb <= ub && a[mid] != ele) {
        if (ele < a[mid])
            ub = mid - 1;
        else
            lb = mid + 1;
        mid = (lb + ub) / 2;
    }

    if (a[mid] == ele)
        cout << ele << " is found at position " << mid + 1 << endl;
    else
        cout << ele << " is not found." << endl;

    return 0;
}
