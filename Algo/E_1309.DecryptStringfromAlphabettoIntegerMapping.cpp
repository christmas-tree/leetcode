/*
https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/


*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

char charToInt(char ch1, char ch2) {
    return ((ch1 - '0')*10 + (ch2 - '0')) + 'a' - 1;
}

char charToInt(char ch) {
    return ch - '1' + 'a';
}

string freqAlphabets(string s) {
    string res = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '#') {
            i -= 2;
            res = charToInt(s[i], s[i+1]) + res;
        } else {
            res = charToInt(s[i]) + res;
        }
    }
    return res;
}

// Driver code
int main() {
    string s = "10#11#12";
    cout << freqAlphabets(s);
}