#include <iostream>
using namespace std;

class Rectangle {
public:
    int width, height;

    // Constructor
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect(5, 10);
    cout << "Area: " << rect.area() << endl;

    return 0;
}
