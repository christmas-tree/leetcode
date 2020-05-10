/*
https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
Runtime: 12 ms, faster than 23.94% of C++ online submissions for Find Numbers with Even Number of Digits.
Memory Usage: 9.8 MB, less than 100.00% of C++ online submissions for Find Numbers with Even Number of Digits.
*/

#include <iostream>
#include <vector>
#include "debugtools.h"
using namespace std;

// function
int findNumbers(vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        int a = nums[i];
        int numOfDigits = 0;
        while (a > 0) {
            a /= 10;
            numOfDigits++;
        }
        if (numOfDigits % 2 == 0)
            count++;
    }
    return count;
}

// Driver code
int main() {
    vector<int> nums = {555,901,482,1771};
    cout << findNumbers(nums);
}