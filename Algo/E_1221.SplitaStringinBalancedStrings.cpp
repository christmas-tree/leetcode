/*
https://leetcode.com/problems/split-a-string-in-balanced-strings/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Split a String in Balanced Strings.
Memory Usage: 6.2 MB, less than 100.00% of C++ online submissions for Split a String in Balanced Strings.
*/

#include <iostream>
#include <vector>
#include "debugtools.h"
using namespace std;

int balancedStringSplit(string s) {
    int count = 0, balance = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'L')
            balance++;
        else
            balance--;
        if (balance == 0)
            count++;
    }
    return count;
}

// Driver code
int main() {
    int target = 5;
    string s = "RLRRLLRLRL";
    cout << balancedStringSplit(s);
}