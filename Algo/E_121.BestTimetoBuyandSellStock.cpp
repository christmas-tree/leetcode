/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Runtime: 8 ms, faster than 97.15% of C++ online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 13.1 MB, less than 54.60% of C++ online submissions for Best Time to Buy and Sell Stock.
*/

#include <iostream>
#include <vector>

#include "../Tools/debugtools.h"
using namespace std;

int maxProfit(vector<int>& prices) {
    if (prices.size() == 0) return 0;

    int lo = prices[0], record = 0;
    for (int i = 0; i < prices.size(); i++) {
        if (prices[i] < lo)
            lo = prices[i];
        if (prices[i] - lo > record)
            record = prices[i] - lo;
    }
    return record;
}
// Driver code
int main() {
    vector<int> nums = {7, 6, 4, 3, 1};
    cout << maxProfit(nums);
}