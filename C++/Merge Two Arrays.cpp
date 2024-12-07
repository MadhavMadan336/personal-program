#include <iostream>
using namespace std;

void mergeArrays(int a[], int b[], int n, int m) {
    int c[n + m];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    while (i < n) c[k++] = a[i++];
    while (j < m) c[k++] = b[j++];
    for (int i = 0; i < n + m; i++) cout << c[i] << " ";
}

int main() {
    int a[] = {1, 3, 5}, b[] = {2, 4, 6};
    mergeArrays(a, b, 3, 3);
    return 0;
}
