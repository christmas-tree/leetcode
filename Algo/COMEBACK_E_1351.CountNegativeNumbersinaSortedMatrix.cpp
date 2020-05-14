/*


*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int res = 0, w = grid[0].size(), h = grid.size();
    int i = h-1, j = w-1;
    bool i_done = false, j_done = false;
    if (grid[i][j] >= 0) return 0;    
    while (i >= 0 && j >= 0 && !i_done && !j_done) {
        if (i >= 0 && j >= 0 && grid[i-1][j] < 0) {
            i--;
            j--;
        } else {
            if (i > 0 && grid[i-1][j] < 0) i--;
            else i_done = true;
            if (j > 0 && grid[i][j-1] < 0) j--;
            else j_done = true;
        }
            
    }
    res += (h-i)*(w-j);
    if (res == 0) return 0;
    for (int a = i-1; a < h; a++) {
        for (int b = j-1; b >= 0; b--) {
            //printf("grid[%d][%d] = %d, res = %d\n", a, b, grid[a][b], (grid[a][b] < 0)? res+1 : res);
            if (grid[a][b] < 0) res++;
            else break;
        }
    }
    //printf("Done left");
    for (int a = j-1; a < w; a++) {
        for (int b = i-1; b >= 0; b--) {
            //printf("grid[%d][%d] = %d, res = %d\n", b, a, grid[b][a], (grid[b][a] < 0)? res+1 : res);
            if (grid[b][a] < 0) res++;
            else break;
        }
    }
    return res;
}

// Driver code
int main() {
    int target = 5;
    vector<vector<int>> nums = {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    cout << countNegatives(nums);
}