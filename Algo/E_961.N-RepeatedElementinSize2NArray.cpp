/*
https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
Runtime: 68 ms, faster than 55.33% of C++ online submissions for N-Repeated Element in Size 2N Array.
Memory Usage: 24.9 MB, less than 5.00% of C++ online submissions for N-Repeated Element in Size 2N Array.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include "../Tools/debugtools.h"
using namespace std;

int repeatedNTimes(vector<int>& A) {
    unordered_set<int> appeared;
    for (int i = 0; i < A.size(); i++) {
        if (appeared.find(A[i]) == appeared.end())
            appeared.insert(A[i]);
        else return A[i];
    }
    return 0;
}

// Driver code
int main() {
    vector<int> nums = {5,1,5,2,5,3,5,4};
    cout << repeatedNTimes(nums);
}