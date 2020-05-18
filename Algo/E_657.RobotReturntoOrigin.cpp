/*
https://leetcode.com/problems/robot-return-to-origin/
Runtime: 28 ms, faster than 33.90% of C++ online submissions for Robot Return to Origin.
Memory Usage: 8 MB, less than 100.00% of C++ online submissions for Robot Return to Origin.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

bool judgeCircle(string moves) {
    int x = 0, y = 0;
    for (int i = 0; i < moves.size(); i++) {
        switch(moves[i]) {
            case 'U':
                y += 1;
                break;
            case 'D':
                y -= 1;
                break;
            case 'L':
                x += 1;
                break;
            case 'R':
                x -= 1;
                break;
        }
    }
    return !(x | y);
}

// Driver code
int main() {
    string input;
    cin >> input;
    cout << judgeCircle(input);
 }