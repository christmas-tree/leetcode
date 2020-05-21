/*
https://leetcode.com/problems/n-ary-tree-postorder-traversal/
Runtime: 56 ms, faster than 21.71% of C++ online submissions for N-ary Tree Postorder Traversal.
Memory Usage: 105.5 MB, less than 20.00% of C++ online submissions for N-ary Tree Postorder Traversal.
*/

#include <iostream>
#include <vector>
#include "../Tools/debugtools.h"
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
vector<int> ans;

vector<int> postorder(Node* root) {
    if (root->children.size() == 0) {
        ans.push_back(root->val);
        return ans;
    }
    for (Node* node: root->children) {
        postorder(node);
    }
    return ans;
}

// Driver code
int main() {
    vector<int> nums = {1,2,3};

}