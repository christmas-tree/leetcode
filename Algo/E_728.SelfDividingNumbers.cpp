/*
https://leetcode.com/problems/self-dividing-numbers/
Runtime: 28 ms, faster than 6.15% of C++ online submissions for Self Dividing Numbers.
Memory Usage: 6.4 MB, less than 100.00% of C++ online submissions for Self Dividing Numbers.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

vector<int> selfDividingNumbers(int left, int right) {
    vector<int> res;
    int temp;
    bool accepted;
    for (int i = left; i <= right; i++) {
        if (i < 10) {
            res.push_back(i);
            continue;
        }
        if (i % 10 == 0) continue;
        temp = i;
        accepted = true;
        while (temp > 0) {
            int digit = temp % 10;
            printf("i = %d, temp = %d, digit = %d\n", i, temp, digit);
            temp /= 10;
            if (digit == 0 || i % digit) {
                accepted = false;
                break;
            } 
        }
        if (accepted) res.push_back(i);
    }
    return res;
}

// Driver code
int main() {
    int left, right;
    cin >> left >> right;
    print(selfDividingNumbers(left, right));
}