#include <iostream>
#include <regex>
int main() {
    std::string s = "My email is example@example.com.";
    std::regex e("\\w+@\\w+\\.\\w+");
    std::smatch match;
    if (std::regex_search(s, match, e)) {
        std::cout << "Found email: " << match[0] << std::endl;
    }
    return 0;
}
