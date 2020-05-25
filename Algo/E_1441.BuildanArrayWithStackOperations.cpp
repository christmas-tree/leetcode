/*
https://leetcode.com/problems/build-an-array-with-stack-operations/
Runtime: 4 ms, faster than 66.35% of C++ online submissions for Build an Array With Stack Operations.
Memory Usage: 8 MB, less than 100.00% of C++ online submissions for Build an Array With Stack Operations.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

vector<string> buildArray(vector<int>& target, int n) {
    vector<string> res;
    int num = 1;
    for (int i = 0; i < target.size(); i++) {
        while (target[i] != num) {
            res.push_back("Push");
            res.push_back("Pop");
            num++;
        }
        res.push_back("Push");
        num++;
    }
    return res;
}


// Driver code
int main() {
    int n = 4;
    vector<int> nums = {1, 3};
    print(buildArray(nums, n));
}