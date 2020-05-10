/*
https://leetcode.com/problems/decompress-run-length-encoded-list/
Runtime: 8 ms, faster than 95.68% of C++ online submissions for Decompress Run-Length Encoded List.
Memory Usage: 10.1 MB, less than 100.00% of C++ online submissions for Decompress Run-Length Encoded List.
*/

#include <iostream>
#include <vector>
#include "debugtools.h"

using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    for (int i = 0; i < n; i=i+2) {
        res.insert(res.end(), nums[i], nums[i+1]);
    }
    return res;
}

// Driver code
int main() {
    vector<int> nums = {1,2,3,4};
    print(decompressRLElist(nums));
}