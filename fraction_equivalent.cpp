// Title: Default Constructor for Fractional Equivalent
// Author: ishmasec

#include <iostream>
using namespace std;

class Fraction {
    int numerator, denominator;
public:
    Fraction() {
        numerator = 1;
        denominator = 2; // Default fraction 1/2
    }

    void display() {
        cout << "Fraction: " << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f;
    f.display();
    return 0;
}
