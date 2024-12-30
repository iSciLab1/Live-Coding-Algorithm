
#include <iostream>
#include <vector>
using namespace std;

class Reactangle {
private:
    int width;
    int height;
public:
    Reactangle(int _width, int  _height) : width(_width), height(_height) {}
    Reactangle(): width(1), height(1){}
    int area() {
        return width * height;
    }
    int perimeter() {
        return 2 * (width + height);
    }

};
int main() {
    Reactangle reactangle_def;
    int resultArea = reactangle_def.area();
    int resultPerimeter = reactangle_def.perimeter();

    std::cout << "Fläche: " << resultArea << std::endl;
    std::cout << "Umfang: " << resultPerimeter << std::endl;


    Reactangle reactangle( 2, 2);
    resultArea = reactangle.area();
    resultPerimeter = reactangle.perimeter();

    std::cout << "Fläche: " << resultArea << std::endl;
    std::cout << "Umfang: " << resultPerimeter << std::endl;


    return 0;
}
