#include <iostream>
using namespace std;

int countEvenNumbers(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of even numbers: " << countEvenNumbers(arr, n) << endl;
    return 0;
}
