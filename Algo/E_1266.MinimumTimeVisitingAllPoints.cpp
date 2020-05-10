/*
https://leetcode.com/problems/minimum-time-visiting-all-points/
Runtime: 16 ms, faster than 24.43% of C++ online submissions for Minimum Time Visiting All Points.
Memory Usage: 10.4 MB, less than 100.00% of C++ online submissions for Minimum Time Visiting All Points.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int x, y, res = 0;
    for (int i = 0; i < points.size() - 1; i++) {
        x = abs(points[i+1][0] - points[i][0]);
        y = abs(points[i+1][1] - points[i][1]);
        res += (x > y) ? x : y;
    }
    return res;
}

// Driver code
int main() {
    int target = 5;
    vector<vector<int>> points = {{3,2},{-2,2}};
    cout << minTimeToVisitAllPoints(points);
}