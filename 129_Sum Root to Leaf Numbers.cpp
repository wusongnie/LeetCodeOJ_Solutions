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
    int sumNumbers(TreeNode* root) {
        return helper(root, 0);
    }
    
    int helper(TreeNode* root, int num){
        if(!root)
            return 0;
        
        num *= 10;
        num += root->val;
        
        if(!root->left && !root->right)
            return num;
        
        return helper(root->left, num) + helper(root->right, num);
    }
};
