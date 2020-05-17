/*
https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/
Runtime: 4 ms, faster than 26.19% of C++ online submissions for Generate a String With Characters That Have Odd Counts.
Memory Usage: 6.2 MB, less than 100.00% of C++ online submissions for Generate a String With Characters That Have Odd Counts.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

string generateTheString(int n) {
    string res;
    int evenN = (n+1)/2*2;
    int i = 0;
    for (; i < evenN-1; i++)
        res += 'a';
    if (i++ < n) res += 'b';
    return res;
}

// Driver code
int main() {
    int n;
    cin >> n;
    cout << generateTheString(n);
}