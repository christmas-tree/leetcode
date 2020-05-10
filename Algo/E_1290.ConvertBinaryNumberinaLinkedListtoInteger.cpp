/*
https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Convert Binary Number in a Linked List to Integer.
Memory Usage: 8.5 MB, less than 100.00% of C++ online submissions for Convert Binary Number in a Linked List to Integer.
*/

#include <iostream>
#include <vector>
#include "Tools/debugtools.h"
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// function
int getDecimalValue(ListNode* head) {
    int res = 0;
    while (head != NULL) {
        res = (res << 1) | (head->val);
        head = head->next;
    }
    return res;
}

// Driver code
int main() {
    int target = 5;
    vector<int> nums = {1,2,3};
}