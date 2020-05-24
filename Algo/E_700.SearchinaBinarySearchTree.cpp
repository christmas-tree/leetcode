/*
https://leetcode.com/problems/search-in-a-binary-search-tree/
Runtime: 120 ms, faster than 5.68% of C++ online submissions for Search in a Binary Search Tree.
Memory Usage: 34.8 MB, less than 9.76% of C++ online submissions for Search in a Binary Search Tree.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

TreeNode* searchBST(TreeNode* root, int val) {
    while (root != NULL && root->val != val) {
        if (root->val < val) root = root->right;
        else root = root->left;
    }
    return root;
}

// Driver code
int main() {
    vector<int> nums = {1,2,3};

}