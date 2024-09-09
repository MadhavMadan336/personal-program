#include <iostream>
#include <cstring>
int lps(char* str) {
    int n = strlen(str);
    int L[n][n];
    for (int i = 0; i < n; i++)
        L[i][i] = 1;
    for (int cl = 2; cl <= n; cl++) {
        for (int i = 0; i < n - cl + 1; i++) {
            int j = i + cl - 1;
            if (str[i] == str[j] && cl == 2)
                L[i][j] = 2;
            else if (str[i] == str[j])
                L[i][j] = L[i + 1][j - 1] + 2;
            else
                L[i][j] = std::max(L[i][j - 1], L[i + 1][j]);
        }
    }
    return L[0][n - 1];
}
int main() {
    char seq[] = "GEEKSFORGEEKS";
    std::cout << "The length of the longest palindromic subsequence is " << lps(seq);
    return 0;
}
