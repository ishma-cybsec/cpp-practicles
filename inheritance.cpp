// Title: Program to Demonstrate Inheritance
// Author: ishma-cybsec

#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "This is the parent class.\n";
    }
};

class Child : public Parent {
};

int main() {
    Child c;
    c.display(); // Accessing parent function
    return 0;
}
