#include <iostream>
int main() {
    int* arr = new int[5];
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
