/*
https://leetcode.com/problems/maximum-subarray/
Runtime: 12 ms
Memory Usage: 13.5 MB
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> nums);

int maxSubArray(vector<int>& nums) {
    vector<int> dp(nums.size(), (int)-10e8);
    int maxSum = nums[0];
    dp[0] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        dp[i] = max(nums[i], dp[i-1] + nums[i]);
        maxSum = max(maxSum, dp[i]);
    }
    return maxSum;
}

// Driver code
int main() {
    int target = 5;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums);
    //print(nums);
}

void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}