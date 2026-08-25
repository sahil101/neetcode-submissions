typedef pair<TreeNode*, TreeNode*> pp;
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<pp> qq;
        qq.push({p, q});
        while (!qq.empty()) {
            pp temp = qq.front();
            qq.pop();
            TreeNode* node_p = temp.first;
            TreeNode* node_q = temp.second;

            if (node_p == NULL && node_q == NULL) continue;              // both null: fine, skip
            if (node_p == NULL || node_q == NULL) return false;          // exactly one null: differ
            if (node_p->val != node_q->val) return false;               // values differ

            qq.push({node_p->left, node_q->left});
            qq.push({node_p->right, node_q->right});
        }
        return true;
    }
};