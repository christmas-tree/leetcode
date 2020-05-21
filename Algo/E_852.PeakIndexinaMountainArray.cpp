/*
https://leetcode.com/problems/peak-index-in-a-mountain-array/
Runtime: 28 ms, faster than 6.36% of C++ online submissions for Peak Index in a Mountain Array.
Memory Usage: 11.7 MB, less than 7.14% of C++ online submissions for Peak Index in a Mountain Array.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

int peakIndexInMountainArray(vector<int>& A) {
    int left = 0, right = A.size() -1, mid;
    while (left < right) {
        mid = (left+right)/2;
        if (A[mid] > A[mid+1])
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}

// Driver code
int main() {
    vector<int> nums = {0,2,1,0};
    cout << peakIndexInMountainArray(nums);
}