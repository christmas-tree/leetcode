/*
https://leetcode.com/problems/range-sum-of-bst/
Runtime: 200 ms, faster than 27.92% of C++ online submissions for Range Sum of BST.
Memory Usage: 64.7 MB, less than 5.45% of C++ online submissions for Range Sum of BST.
*/

#include <iostream>
#include <vector>
#include "Tools/debugtools.h"
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


int rangeSumBST(TreeNode* root, int L, int R) {
    if (root == NULL) return 0;
    if (root->val < L) return rangeSumBST(root->right, L, R);
    if (root->val > R) return rangeSumBST(root->left, L, R);
    return rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R) + root->val;
}

// Driver code
int main() {
}