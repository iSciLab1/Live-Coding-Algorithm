
#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#include <complex>


#define M_PI 3.141592

using namespace std;
//using namespace complex_literals;

class Complex {
private:
    double real;
    double image;
public:
    Complex(double _real, double _image): real(_real), image(_image){}
    Complex operator+(const Complex& other) const {
        return { real + other.real, image + other.image };
    }
    //void print() const {
    //    cout << real << " + " << image << "i";
    //}
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.image << "i";
        return out;
    }

};

int main() {
    Complex c1(2, 2);
    Complex c2(1, 1);
    Complex c3 = c1 + c2;
    cout << "Summe: " << c3 << endl;
    //c3.print();
    return 0;
}