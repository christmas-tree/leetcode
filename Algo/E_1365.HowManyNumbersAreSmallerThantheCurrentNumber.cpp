/*
https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
Runtime: 4 ms, faster than 99.94% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
Memory Usage: 10 MB, less than 100.00% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
*/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> nums);

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> res(nums.size());
    int count[101] = {0};
    for (int i = 0; i < nums.size(); i++) {
        count[nums[i]]++;
    }
    for (int i = 1; i < 100; i++) {
        count[i] += count[i-1];
    }
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0)
            res[i] = 0;
        else
            res[i] = count[nums[i] - 1];
    }
    return res;
}

// 0 1 2 1 0 0 ..

// Driver code
int main() {
    vector<int> nums = {8,1,2,2,3};
    print(smallerNumbersThanCurrent(nums));
}

void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}