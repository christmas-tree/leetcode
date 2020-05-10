/*
581. Shortest Unsorted Continuous Subarray

*/

====>>> Think again

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> nums);

int findUnsortedSubarray(vector<int>& nums) {
    int minA = 10e8, maxA = 0, substart = 0, subend = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (minA > nums[i])
            minA = nums[i];
        else if (substart <= 0)
            substart = i;
        if (maxA <= nums[i])
            maxA = nums[i];
        else
            subend = i;
    }
    return subend - substart + 1;
}

// Driver code
int main() {
    vector<int> nums = {2, 6, 4, 8, 10, 9, 15};
    cout << findUnsortedSubarray(nums);
}

void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}