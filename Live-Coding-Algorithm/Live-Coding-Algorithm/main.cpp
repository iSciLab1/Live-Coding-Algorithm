
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
    std::complex<double> z1;
    std::complex<double> z2;
public:
    Complex(complex<double> _z1, complex<double> _z2): z1(_z1), z2(_z2){}
    std::complex<double> addition(){
        return z1 + z2;
    }
};

int main() {
    Complex complex(1.0 + 2.0i, 2.0 + 1.0i);

    cout << "Complex: " << complex.addition() << endl;
    
    return 0;
}