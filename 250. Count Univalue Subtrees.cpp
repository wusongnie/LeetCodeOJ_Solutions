/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void countUnivalSubtrees(TreeNode* root, int& counter) {
        if (root == nullptr)
            return;
        if (helper(root))
            counter++;
        countUnivalSubtrees(root->left, counter);
        countUnivalSubtrees(root->right, counter);
    }
    bool helper(TreeNode* root){
        if(!root->left && !root->right){
            return true;
        }else if(root->left&&root->right){
            if(helper(root->right) && helper(root->left) && root->val == root->right->val && root->val == root->left->val)
            return true;
        }else if(root->left){
            if(helper(root->left) && root->val == root->left->val){
                return true;
            }
        }else if(root->right){
            if(helper(root->right) && root->val == root->right->val){
                return true;
            }
        }
        return false;
        
    }
    int countUnivalSubtrees(TreeNode* root) {
        if(!root)
            return 0;
        int res = 0;
        countUnivalSubtrees(root, res);
        return res;
    }
};
