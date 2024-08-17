#include <iostream>
#include <algorithm>
void countingSort(int arr[], int n) {
    int max = *std::max_element(arr, arr + n);
    int min = *std::min_element(arr, arr + n);
    int range = max - min + 1;
    int count[range] = {0};
    int output[n];
    for (int i = 0; i < n; i++) {
        count[arr[i] - min]++;
    }
    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}
int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    countingSort(arr, n);
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
