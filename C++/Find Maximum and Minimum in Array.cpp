#include <iostream>
void findMaxMin(int arr[], int n, int &max, int &min) {
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
}
int main() {
    int arr[] = {100, 34, 25, 45, 78, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max, min;
    findMaxMin(arr, n, max, min);
    std::cout << "Maximum element is " << max << "\n";
    std::cout << "Minimum element is " << min << "\n";
    return 0;
}
