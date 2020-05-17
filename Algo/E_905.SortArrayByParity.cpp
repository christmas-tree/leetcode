/*
https://leetcode.com/problems/sort-array-by-parity/
Runtime: 20 ms, faster than 82.42% of C++ online submissions for Sort Array By Parity.
Memory Usage: 16.5 MB, less than 5.17% of C++ online submissions for Sort Array By Parity.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

vector<int> sortArrayByParity(vector<int>& A) {
    vector<int> res(A.size());
    int idxLeft = -1, idxRight = A.size();
    for (int i = 0; i < A.size(); i++) {
        if (A[i] % 2 == 0) res[++idxLeft] = A[i];
        else res[--idxRight] = A[i];
    }
    return res;
}

// Driver code
int main() {
    vector<int> A = {3,1,2,4};
    print(sortArrayByParity(A));
}