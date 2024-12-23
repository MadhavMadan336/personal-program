#include <iostream>
using namespace std;

void findMinMax(int arr[], int n) {
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    cout << "Min: " << min << ", Max: " << max << endl;
}

int main() {
    int arr[] = {3, 5, 1, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, n);
    return 0;
}
