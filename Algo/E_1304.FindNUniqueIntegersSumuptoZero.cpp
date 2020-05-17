/*
https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find N Unique Integers Sum up to Zero.
Memory Usage: 6.9 MB, less than 100.00% of C++ online submissions for Find N Unique Integers Sum up to Zero.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

vector<int> sumZero(int n) {
    vector<int> res(n, 0);
    int half = n/2;
    int cur = 0;
    for (int i =  half-1; i >= 0; i--) {
        res[i] = ++cur;
    }
    for (int i = half; i < n; i++) {
        res[i] = -(cur--);
    }
    return res;
}

// Driver code
int main() {
    int n;
    cin >> n;
    print(sumZero(n));
}