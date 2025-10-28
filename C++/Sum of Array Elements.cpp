#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n], sum = 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) sum += arr[i];
    cout << "Sum = " << sum;
}
