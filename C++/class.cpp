#include <iostream>
class Rectangle {
public:
    int width;
    int height;
    int area() {
        return width * height;
    }
};
int main() {
    Rectangle rect;
    rect.width = 3;
    rect.height = 4;
    std::cout << "Area of Rectangle: " << rect.area() << std::endl;
    return 0;
}
