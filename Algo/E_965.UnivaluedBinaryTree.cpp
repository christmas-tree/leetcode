/*
https://leetcode.com/problems/univalued-binary-tree/
Runtime: 8 ms, faster than 5.48% of C++ online submissions for Univalued Binary Tree.
Memory Usage: 10.2 MB, less than 100.00% of C++ online submissions for Univalued Binary Tree.
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

bool isUnivalTree(TreeNode* root, int val = -1) {
        if (root == NULL) return true;
        if (val == -1) val = root->val;
        return root->val == val && isUnivalTree(root->left, val) && isUnivalTree(root->right, val);
}

// Driver code
int main() {
    vector<int> nums = {1,2,3};

}