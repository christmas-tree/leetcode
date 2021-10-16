#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string s1 = "geeks";
    string s2 = "geek";

    int dp[s1.size() + 1][s2.size() + 1];

    for (int i = 0; i <= s1.size(); i++) {
        for (int j = 0; j <= s2.size(); j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (s1[i] == s2[j]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1+ min(min(dp[i-1][j-1], dp[])
            }
        }
    }
}