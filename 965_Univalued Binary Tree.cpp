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
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if (!root) {
            return true;
        }
        bool l_ubt = false;
        bool r_ubt = false;
        if (root->left) {
            if (root->val == root->left->val) {
                l_ubt = true;
            }
        } else {
            l_ubt = true;
        }
        if (root->right) {
            if (root->val == root->right->val) {
                r_ubt = true;
            }
        } else {
            r_ubt = true;
        }
        if (!l_ubt || !r_ubt) {
            return false;
        }

        return isUnivalTree(root->left) && isUnivalTree(root->right);
    }
};
