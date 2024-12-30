
#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#define M_PI 3.141592

using namespace std;

class Shape {

private:
public:
    virtual double getArea() {
        return 0;
    }
    virtual ~Shape() {};
};

class Circle: public Shape {

private:
    double radius;
public:
    Circle(double _radius): radius(_radius){}
    double getArea() {
        return M_PI * radius * radius;
    }
};

class Reactangle: public Shape {
private:
    int width;
    int height;
public:
    Reactangle(int _width, int  _height) : width(_width), height(_height) {}
    Reactangle(): width(1), height(1){}
    double getArea() {
        return width * height;
    }
    int perimeter() {
        return 2 * (width + height);
    }

};
int main() {
    Shape* shape = new Reactangle(2,2);
    Shape* shape_def = new Reactangle();
    Shape* shape_cir = new Circle(2);

    std::cout << "Fläche: " << shape->getArea() << std::endl;
    std::cout << "Fläche: " << shape_def->getArea() << std::endl;
    std::cout << "Fläche: " << shape_cir->getArea() << std::endl;

    return 0;
}