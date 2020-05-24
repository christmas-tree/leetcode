/*
https://leetcode.com/problems/relative-sort-array/
Runtime: 4 ms, faster than 91.69% of C++ online submissions for Relative Sort Array.
Memory Usage: 8.3 MB, less than 100.00% of C++ online submissions for Relative Sort Array.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include "../Tools/debugtools.h"
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> ocr;
    vector<int> res(arr1.size());
    auto cur = res.begin();
    for (int i = 0; i < arr1.size(); i++) {
        ocr[arr1[i]]++;
    }

    for (int i = 0; i < arr2.size(); i++) {
        int temp = ocr[arr2[i]];
        while (temp > 0) {
            *cur = arr2[i];
            cur++;
            temp--;
        }
        ocr.erase(arr2[i]);
    }

    auto cur2 = cur;
    for (auto it=ocr.begin(); it != ocr.end(); it++) {
        while (it->second > 0) {
            *cur2 = it->first;
            cur2++;
            (it->second)--;
        }
    }

    sort(cur, cur2);
    return res;
}

// Driver code
int main() {
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};
    print(relativeSortArray(arr1, arr2));
}