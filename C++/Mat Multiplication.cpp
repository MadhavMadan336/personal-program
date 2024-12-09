#include <iostream>
using namespace std;

void multiplyMatrices(int a[][2], int b[][2], int result[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) result[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main() {
    int a[2][2] = {{1, 2}, {3, 4}}, b[2][2] = {{5, 6}, {7, 8}}, result[2][2];
    multiplyMatrices(a, b, result);
    for (int i = 0; i < 2; i++) {

