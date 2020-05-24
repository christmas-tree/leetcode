/*
https://leetcode.com/problems/unique-number-of-occurrences/
Runtime: 4 ms, faster than 81.90% of C++ online submissions for Unique Number of Occurrences.
Memory Usage: 8.3 MB, less than 100.00% of C++ online submissions for Unique Number of Occurrences.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "../Tools/debugtools.h"
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> numOcr;
    unordered_set<int> ocrOcr;

    for (int i = 0; i < arr.size(); i++) {
        if (numOcr.find(arr[i]) != numOcr.end()) {
            numOcr[arr[i]]++;
        } else
            numOcr[arr[i]] = 1;
    }

    for (auto it = numOcr.begin(); it != numOcr.end(); it++) {
        if (ocrOcr.find(numOcr[it->first]) != ocrOcr.end())
            ocrOcr.insert(numOcr[it->first]);
        else
            return false;
    } 
    return true;
}

// Driver code
int main() {
    vector<int> nums = {1,2,2,1,1,3};
    uniqueOccurrences(nums);
}