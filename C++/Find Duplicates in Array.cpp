#include <iostream>
#include <unordered_map>
void findDuplicates(int arr[], int n) {
    std::unordered_map<int, int> countMap;
    for (int i = 0; i < n; i++) {
        countMap[arr[i]]++;
    }
    for (auto it : countMap) {
        if (it.second > 1) {
            std::cout << it.first << " appears " << it.second << " times\n";
        }
    }
}
int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    findDuplicates(arr, n);
    return 0;
}
