#include <iostream>
#include <unordered_set>
using namespace std;

void removeDuplicates(int arr[], int &n) {
    unordered_set<int> uniqueElements;
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (uniqueElements.find(arr[i]) == uniqueElements.end()) {
            uniqueElements.insert(arr[i]);
            arr[j++] = arr[i];
        }
    }
    n = j;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
