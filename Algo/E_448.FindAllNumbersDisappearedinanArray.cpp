/*
https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
Runtime: 172 ms, faster than 34.05% of C++ online submissions for Find All Numbers Disappeared in an Array.
Memory Usage: 33.8 MB, less than 58.65% of C++ online submissions for Find All Numbers Disappeared in an Array.
*/

#include <iostream>
#include <vector>

#include "../Tools/debugtools.h"
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        int number = nums[i] > 0 ? nums[i] : -nums[i];
        nums[number - 1] *= nums[number - 1] < 0 ? 1 : -1;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0)
            res.push_back(i + 1);
    }
    return res;
}

// Driver code
int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    print(findDisappearedNumbers(nums));
}