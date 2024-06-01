#include <iostream>
int main() {
    try {
        throw "Exception occurred!";
    } catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;
    }
    return 0;
}
