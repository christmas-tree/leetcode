/*
https://leetcode.com/problems/merge-two-sorted-lists/
Runtime: 8 ms, faster than 85.88% of C++ online submissions for Merge Two Sorted Lists.
Memory Usage: 14.4 MB, less than 5.74% of C++ online submissions for Merge Two Sorted Lists.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == NULL)
        if (l2 == NULL)
            return NULL;
        else return l2;
    else if (l2 == NULL)
        return l1;
    
    ListNode* head, cur;
    if (l1->al > l2->val) {
        head = l2;
        head->next = mergeTwoLists(l1, l2->next);
    }
    else {
        head = l1;
        head->next = mergeTwoLists(l1->next, l2);
    }
    return head;
}

// Driver code
int main() {
//
}