/*
https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
Runtime: 32 ms, faster than 89.34% of C++ online submissions for Replace Elements with Greatest Element on Right Side.
Memory Usage: 14.9 MB, less than 100.00% of C++ online submissions for Replace Elements with Greatest Element on Right Side.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    int maxVal = -1, temp = 0;
    for (int i = arr.size()-1; i >= 0; i--) {
        temp = arr[i];
        arr[i] = maxVal;
        maxVal = max(temp, maxVal);
    }
    return arr;
}

// Driver code
int main() {
    vector<int> nums = {17,18,5,4,6,1};
    print(replaceElements(nums));
}