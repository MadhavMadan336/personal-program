#include <iostream>
#include <stack>
int main() {
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    std::cout << "Top: " << s.top() << std::endl;
    s.pop();
    std::cout << "Top after pop: " << s.top() << std::endl;
    return 0;
}
