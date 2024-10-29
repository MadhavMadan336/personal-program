#include <iostream>
using namespace std;

int sum(int* arr, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += *(arr + i);
    }
    return total;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements: " << sum(arr, n) << endl;
    return 0;
}
