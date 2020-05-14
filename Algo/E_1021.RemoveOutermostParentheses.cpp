/*
https://leetcode.com/problems/remove-outermost-parentheses/submissions/
Runtime: 4 ms, faster than 95.04% of C++ online submissions for Remove Outermost Parentheses.
Memory Usage: 6.7 MB, less than 100.00% of C++ online submissions for Remove Outermost Parentheses.
*/

#include <iostream>
#include <vector>
#include <stack>
#include "../Tools/debugtools.h"
using namespace std;


/* First submission
Runtime: 8 ms, faster than 43.39% of C++ online submissions for Remove Outermost Parentheses.
Memory Usage: 6.7 MB, less than 100.00% of C++ online submissions for Remove Outermost Parentheses.


string removeOuterParentheses(string S) {
    string res;
    stack<char> st;
    for (int i = 0; i < S.size(); i++) {
        if (st.empty()) {
            st.push(S[i]);
            continue;
        }
        if (S[i] == ')' && st.top() == '(')
            st.pop();
        else
            st.push(S[i]);
        if (!st.empty())
            res.push_back(S[i]);
    }
    return res;
}
*/

string removeOuterParentheses(string S) {
    string res = "";
    int status = 0;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '(') {
            if (status > 0)
                res.push_back(S[i]);
            status++;
        }
        else {
            status--;
            if (status > 0)
                res.push_back(S[i]);
        }
    }
    return res;
}

// Driver code
int main() {
    string str;
    cin >> str;
    cout << removeOuterParentheses(str);
}