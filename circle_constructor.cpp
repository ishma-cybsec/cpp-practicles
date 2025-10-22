// Title: Default Constructor for Circle
// Author: ishma-cybsec

#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle() {
        radius = 1.0; // Default radius
    }

    void display() {
        cout << "Radius of the circle: " << radius << endl;
    }
};

int main() {
    Circle c;
    c.display();
    return 0;
}
