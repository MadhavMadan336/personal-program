#include <iostream>
int findSubstring(std::string str, std::string substr) {
    int M = substr.length();
    int N = str.length();
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (str[i + j] != substr[j])
                break;
        if (j == M)
            return i;
    }
    return -1;
}
int main() {
    std::string str = "hello world";
    std::string substr = "world";
    int index = findSubstring(str, substr);
    (index == -1) ? std::cout << "Substring not found." : std::cout << "Substring found at index " << index;
    return 0;
}
