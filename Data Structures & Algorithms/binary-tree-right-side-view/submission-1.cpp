class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};
        vector<int> ans;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            auto [node, level] = q.front();
            q.pop();
            if (level == ans.size()) ans.push_back(node->val);
            else ans[level] = node->val;   // later node at this level is further right
            if (node->left)  q.push({node->left,  level + 1});
            if (node->right) q.push({node->right, level + 1});
        }
        return ans;
    }
};