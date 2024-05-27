#include <iostream>
struct Point {
    int x;
    int y;
};
int main() {
    Point p = {3, 4};
    std::cout << "Coordinates: (" << p.x << ", " << p.y << ")" << std::endl;
    return 0;
}
