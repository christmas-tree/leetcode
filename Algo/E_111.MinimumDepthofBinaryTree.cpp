/*
https://leetcode.com/problems/minimum-depth-of-binary-tree/
Runtime: 20 ms, faster than 49.01% of C++ online submissions for Minimum Depth of Binary Tree.
Memory Usage: 19.7 MB, less than 99.44% of C++ online submissions for Minimum Depth of Binary Tree.
*/

#include <iostream>
#include <vector>

#include "../Tools/debugtools.h"
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int minDepth(TreeNode *root) {
    if (root == NULL) {
        return 0;
    }
    int left = minDepth(root->left);
    int right = minDepth(root->right);

    if (left != 0 && right != 0)
        return 1 + (left < right ? left : right);
    if (left == 0 && right == 0)
        return 1;
    return 1 + (left != 0 ? left : right);
}

// Driver code
int main() {
    TreeNode first, second;
    first.left = &second;
    first.right = NULL;
    second.right = NULL;
    second.left = NULL;
    cout << minDepth(&first);
}