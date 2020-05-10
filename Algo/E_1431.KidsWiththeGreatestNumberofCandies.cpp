/*
https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
Runtime: 4 ms, faster than 88.34% of C++ online submissions for Kids With the Greatest Number of Candies.
Memory Usage: 8.9 MB, less than 100.00% of C++ online submissions for Kids With the Greatest Number of Candies.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(vector<bool> nums);

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int maxCandy = 0, n = candies.size();
    vector<bool> res(n, false);
    for (int i = 0; i < n; i++) {
        maxCandy = max(candies[i], maxCandy);
    }
    for (int i = 0; i < n; i++) {
        if (candies[i] + extraCandies >= maxCandy)
            res[i] = true;
    }
    return res;
}

// Driver code
int main() {
    int extraCandies = 3;
    vector<int> nums = {2,3,5,1,3};
    print(kidsWithCandies(nums, extraCandies));
}

void print(vector<bool> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}