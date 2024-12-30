#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0;
    virtual ~Shape() {
        cout << "Shape destroyed" << endl;
    }
};

class Rectangle : public Shape {
public:
    ~Rectangle() {
        cout << "Rectangle destroyed" << endl;
    }
    double getArea() override {
        return 0; 
    }
};

int main() {
    Shape* rect = new Rectangle();
    delete rect;

    return 0;
}
