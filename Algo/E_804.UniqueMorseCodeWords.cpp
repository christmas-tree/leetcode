/*
https://leetcode.com/problems/unique-morse-code-words/
Runtime: 4 ms, faster than 94.22% of C++ online submissions for Unique Morse Code Words.
Memory Usage: 8.6 MB, less than 100.00% of C++ online submissions for Unique Morse Code Words.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include "../Tools/debugtools.h"
using namespace std;

string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

int uniqueMorseRepresentations(vector<string>& words) {
    unordered_set<string> set;
    for (string w: words) {
        string m;
        for (char ch: w) {
            m += morse[ch - 'a'];
        }
        set.insert(m);
    }
    return set.size();
}

// Driver code
int main() {
    vector<string> words = {"gin", "zen", "gig", "msg"};
    cout << uniqueMorseRepresentations(words);
}