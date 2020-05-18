/*
https://leetcode.com/problems/squares-of-a-sorted-array/
Runtime: 56 ms, faster than 96.02% of C++ online submissions for Squares of a Sorted Array.
Memory Usage: 25.9 MB, less than 5.40% of C++ online submissions for Squares of a Sorted Array.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

vector<int> sortedSquares(vector<int>& A) {
    vector<int> res(A.size());
    int curRes = A.size(), curLeft = 0, curRight = A.size() - 1;
    while (curLeft <= curRight) {
        if (A[curLeft] < 0 && -A[curLeft] > A[curRight]) {
            res[--curRes] = A[curLeft]*A[curLeft++];
        } else {
            res[--curRes] = A[curRight]*A[curRight--];
        }
    }
    return res;
}

// Driver code
int main() {
    vector<int> nums = {-7,-3,2,3,11};
    print(sortedSquares(nums));
}