#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string s1 = "ABCDGH";
    string s2 = "AEDFHR";

    int dp[s1.size()][s2.size()];

    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < s2.size(); j++) {
            dp[i][j] = 0;
        }
    }

    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < s2.size(); j++) {
            if (i == 0 || j == 0) {
                if (s1[i] == s2[j])
                    dp[i][j] = 1;
            } else if (s1[i] == s2[j]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < s2.size(); j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << dp[s1.size() - 1][s2.size() - 1];
}