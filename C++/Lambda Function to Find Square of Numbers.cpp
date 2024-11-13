#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    for_each(nums.begin(), nums.end(), [](int x) {
        cout << x * x << " ";
    });
    cout << endl;
    return 0;
}
