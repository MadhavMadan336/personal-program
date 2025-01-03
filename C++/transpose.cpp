#include <iostream>
using namespace std;

void transpose(int matrix[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int result[2][2];

    transpose(matrix, result);

    cout << "Transpose:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
