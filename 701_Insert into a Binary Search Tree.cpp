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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        helper(root,val);
        return root;
    }
    TreeNode* helper(TreeNode* root, int val){
        if(!root)
            return new TreeNode(val);
        if(root->val > val){
            root->left = helper(root->left,val);
        }
        
        if(root->val < val){
            root->right = helper(root->right,val);
        }
        
        return root;
    }
};
