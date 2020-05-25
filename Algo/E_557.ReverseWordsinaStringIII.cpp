/*
https://leetcode.com/problems/reverse-words-in-a-string-iii/
Runtime: 48 ms, faster than 49.12% of C++ online submissions for Reverse Words in a String III.
Memory Usage: 10.3 MB, less than 100.00% of C++ online submissions for Reverse Words in a String III.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

string reverseWords(string s) {
    string res(s);
    int resIdx, sIdx;
    sIdx = s.size();
    for (int i = sIdx; i >= 0; i--) {
        if (s[i] == ' ') {
            resIdx = i;
            res[resIdx++] = ' ';
            sIdx--;
            while (sIdx != i) {
                printf("res[%d] = %c, s[%d] = %c\n", resIdx, res[resIdx], sIdx, s[sIdx]);
                res[resIdx++] = s[sIdx--];
            }
        } else if (i == 0) {
            resIdx = i;
            sIdx--;
            while (sIdx >= 0) {
                printf("res[%d] = %c, s[%d] = %c\n", resIdx, res[resIdx], sIdx, s[sIdx]);
                res[resIdx++] = s[sIdx--];
            }
        }
    }
    return res;
}

// Driver code
int main() {
    cout << reverseWords("Let's take LeetCode contest");
}