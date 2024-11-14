#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {10, 5, 20, 15};
    sort(nums.begin(), nums.end(), [](int a, int b) {
        return a > b;
    });

    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
