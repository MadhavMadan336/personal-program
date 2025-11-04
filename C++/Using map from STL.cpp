#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> age;
    age["Alice"] = 25;
    age["Bob"] = 30;
    for (auto p : age)
        cout << p.first << ": " << p.second << endl;
}
