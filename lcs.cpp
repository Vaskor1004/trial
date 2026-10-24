#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}
int lcs(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();
    int dp[100][100];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}
int main() {
    string s1 = "abcde";
    string s2 = "ace";

    cout << "Length of LCS: " << lcs(s1, s2);

    return 0;
}
