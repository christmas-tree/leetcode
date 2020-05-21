/*
https://leetcode.com/problems/lucky-numbers-in-a-matrix/

*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

vector<int> luckyNumbers (vector<vector<int>>& matrix) {
    vector<int> maxColIdx(matrix.size(), -1);
    vector<int> minRowIdx(matrix[0].size(), -1);
    int 

    for (int i = 0; i < )
}

// Driver code
int main() {
    vector<vector<int>> mat = {{3,7,8},{9,11,13},{15,16,17}};
    print(luckyNumbers(mat));
}