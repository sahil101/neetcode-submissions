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

typedef pair<bool,int> p;

class Solution {
public:
    p calHeight(TreeNode* root) {
        if (!root) return {true, 0};

        p left = calHeight(root->left);
        if (!left.first) return {false, 0};
        p right = calHeight(root->right);
        if (!right.first) return {false, 0};
        bool flag = abs(left.second - right.second) <= 1;
        int height = 1 + max(left.second, right.second);
        return {flag, height};
    }
    bool isBalanced(TreeNode* root) {
        if (!root) return true;

        return calHeight(root).first;
    }
};
