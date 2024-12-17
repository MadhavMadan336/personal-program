#include <iostream>
using namespace std;

int findMiddle(int arr[], int n) {
    return arr[n / 2];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Middle element: " << findMiddle(arr, n) << endl;
    return 0;
}
