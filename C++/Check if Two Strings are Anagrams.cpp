#include <iostream>
#include <algorithm>
bool areAnagram(std::string str1, std::string str2) {
    if (str1.length() != str2.length())
        return false;
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());
    return (str1 == str2);
}
int main() {
    std::string str1 = "listen";
    std::string str2 = "silent";
    areAnagram(str1, str2) ? std::cout << "The strings are anagrams." : std::cout << "The strings are not anagrams.";
    return 0;
}
