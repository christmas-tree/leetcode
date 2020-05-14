/*
https://leetcode.com/problems/to-lower-case/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for To Lower Case.
Memory Usage: 6 MB, less than 100.00% of C++ online submissions for To Lower Case.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

string toLowerCase(string str) {
    for (int i = 0; i < str.size(); i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    return str;
}

// Driver code
int main() {
    string s = "LOVeLY";
    cout << toLowerCase(s);
}