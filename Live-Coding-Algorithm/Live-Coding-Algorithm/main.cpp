
#include <iostream>
#include <vector>
using namespace std;

class Reactangle {
private:
    int width;
    int height;
public:
    Reactangle(int _width, int  _height) : width(_width), height(_height) {}
    int area() {
        return width * height;
    }
    int perimeter() {
        return 2 * (width + height);
    }

};
int main() {

    Reactangle reactangle( 2, 2);
    int resultArea = reactangle.area();
    int resultPerimeter = reactangle.perimeter();

    std::cout << "Fläche: " << resultArea << std::endl;
    std::cout << "Umfang: " << resultPerimeter << std::endl;

    return 0;
}
