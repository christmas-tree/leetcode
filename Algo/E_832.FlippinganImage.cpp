/*
https://leetcode.com/problems/flipping-an-image/
Runtime: 12 ms, faster than 49.10% of C++ online submissions for Flipping an Image.
Memory Usage: 9 MB, less than 100.00% of C++ online submissions for Flipping an Image.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    int d = A.size(), limit = (d+1)/2;
    for (int i = 0; i < d; i++)
        for (int j = 0; j < limit; j++)
            if (A[i][j] == A[i][d-1-j]) {
                if (A[i][j] == 1) A[i][j] = 0;
                else A[i][j] = 1;
                A[i][d-1-j] = A[i][j];
            }
    return A;
}


// Driver code
int main() {
    int target = 5;
    vector<vector<int>> nums = {{1,1,0},{1,0,1},{0,0,0}};
    print(flipAndInvertImage(nums));

}