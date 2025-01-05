#include <iostream>
using namespace std;

void printPyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }
}

int main() {
    int rows = 5;
    printPyramid(rows);
    return 0;
}
