#include <iostream>
int findLargest(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Largest number in array is: " << findLargest(arr, n);
    return 0;
}
