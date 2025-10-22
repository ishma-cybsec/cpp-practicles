// Title: Constructor and Destructor using Ratio Class
// Author: ishma-cybsec

#include <iostream>
using namespace std;

class Ratio {
    int num, den;
public:
    Ratio() {
        num = 1; den = 1;
        cout << "Constructor called\n";
    }
    ~Ratio() {
        cout << "Destructor called\n";
    }
};

int main() {
    Ratio r;
    return 0;
}
