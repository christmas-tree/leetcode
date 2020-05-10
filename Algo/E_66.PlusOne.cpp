/*
https://leetcode.com/problems/plus-one/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Plus One.
Memory Usage: 8.6 MB, less than 81.97% of C++ online submissions for Plus One.
*/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> nums);

vector<int> plusOne(vector<int>& digits) {
    int carry = 1;
    for (int i = digits.size() - 1; i >= 0; i--) {
        digits[i] += carry;
        if (digits[i] > 9) {
            carry = digits[i] / 10;
            digits[i] = digits[i] % 10;
        } else {
            carry = 0;
        }
    }
    if (carry) digits.insert(digits.begin(), 1, carry);
    return digits;
}

// Driver code
int main() {
    vector<int> nums = {9};
    print(plusOne(nums));
}

void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}