/*
https://leetcode.com/problems/longest-common-prefix/
Runtime: 8 ms, faster than 36.45% of C++ online submissions for Longest Common Prefix.
Memory Usage: 9.6 MB, less than 6.45% of C++ online submissions for Longest Common Prefix.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

int lenMin(vector<string> strs) {
    int min = 10e8;
    for (int i = 0; i < strs.size(); i++) {
        if (min > strs[i].size()) min = strs[i].size();
    }
    return min;
}

string longestCommonPrefix(vector<string>& strs) {
    if (strs.size() == 0) return "";
    int minLen = lenMin(strs);
    char ch;
    bool yep;
    string res;
    for (int i = 0; i < minLen; i++) {
        yep = true;
        ch = strs[0][i];
        for (int j = 1; j < strs.size(); j++)
            if (ch != strs[j][i]) {
                yep = false;
                break;
            }
        if (yep) res += ch;
        else break;
    }
    return res;
}

// Driver code
int main() {
    vector<string> strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs);
}