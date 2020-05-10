/*
https://leetcode.com/problems/length-of-last-word/
Runtime: 4 ms, faster than 53.87% of C++ online submissions for Length of Last Word.
Memory Usage: 6.5 MB, less than 100.00% of C++ online submissions for Length of Last Word.
*/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> nums);

int lengthOfLastWord(string s) {
    if (s.size() == 0) return 0;
    int i, j = s.size() - 1;
    while (s[j] == ' ' && j > 0) j--;
    for (i = j; i >= 0 && s[i] != ' '; i--);
    return j - i;
}

// Driver code
int main() {
    string s = "";
    cout << lengthOfLastWord(s);
}