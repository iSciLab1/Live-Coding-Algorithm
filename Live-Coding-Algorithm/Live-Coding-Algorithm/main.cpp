
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
    virtual void printArea() {
        std::cout << "Fläche: " << getArea() << std::endl;
    }
    virtual ~Shape() {};
};

class Circle: public Shape {

private:
    double radius;
    double result;
public:
    Circle(double _radius): radius(_radius){}
    double getArea() override {
        result = M_PI * radius * radius;
        return result;
    }
    void printArea() override {
        std::cout << "Fläche: " << getArea() << std::endl;
    }
};

class Reactangle: public Shape {
private:
    int width;
    int height;
    double result;
public:
    Reactangle(int _width, int  _height) : width(_width), height(_height) {}
    Reactangle(): width(1), height(1){}
    double getArea() override {
        result = width * height;
        return result;
    }
    int perimeter() {
        return 2 * (width + height);
    }
    void printArea() override {
        std::cout << "Fläche: " << getArea() << std::endl;
    }

};
int main() {
    std::vector<Shape*> shapes{new Reactangle(), new Reactangle(2,2), new Circle(2) };
    for (int i = 0; i < shapes.size(); i++) {
        shapes[i]->printArea();
    }
    for (int i = 0; i < shapes.size(); i++) {
        delete shapes[i];
    }

    vector<Shape*> shapes_v2;
    shapes_v2.push_back(new Reactangle());
    shapes_v2.push_back(new Reactangle(2,2));
    shapes_v2.push_back(new Circle(2));

    for (Shape* shape : shapes_v2) {
        shape->printArea();
    }

    for (Shape* shape : shapes_v2) {
        delete shape;
    }


    return 0;
}