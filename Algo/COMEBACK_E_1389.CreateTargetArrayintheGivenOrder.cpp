/*
https://leetcode.com/problems/create-target-array-in-the-given-order/

*/

// https://leetcode.com/problems/create-target-array-in-the-given-order/discuss/549583/O(nlogn)-based-on-%22smaller-elements-after-self%22.

#include <iostream>
#include <vector>
#include "Tools/debugtools.h"
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    
}



// Driver code
int main() {
    vector<int> nums = {0,1,2,3,4};
    vector<int> index = {0,1,2,2,1};
    print(createTargetArray(nums, index));
}