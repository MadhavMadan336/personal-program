#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};//initialise the vector 
    v.push_back(40);
    cout << "Vector elements: ";//print message 
    for (int i : v)
        cout << i << " ";
}
