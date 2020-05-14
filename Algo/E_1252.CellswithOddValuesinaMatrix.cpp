/*
https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
Runtime: 8 ms, faster than 32.25% of C++ online submissions for Cells with Odd Values in a Matrix.
Memory Usage: 8.1 MB, less than 100.00% of C++ online submissions for Cells with Odd Values in a Matrix.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

int oddCells(int n, int m, vector<vector<int>>& indices) {
    vector<vector<int>> matrix(n, vector<int>(m));
    int k = indices.size();
    int odd = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < m; j++)
            if ((++matrix[indices[i][0]][j]) % 2)
                odd++;
            else odd--;
        for (int j = 0; j < n; j++)
            if ((++matrix[j][indices[i][1]]) % 2)
                odd++;
            else odd--;
    }
    return odd;
}

// Driver code
int main() {
    vector<vector<int>> indices = {{0, 1}, {1, 1}};
    cout << oddCells(2, 3, indices);
}