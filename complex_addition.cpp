// Title: Addition of Two Complex Numbers
// Author: ishma-cybsec

#include <iostream>
using namespace std;

class Complex {
public:
    float real, imag;

    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "First complex number:\n";
    c1.input();
    cout << "Second complex number:\n";
    c2.input();

    c3 = c1.add(c2);

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}
