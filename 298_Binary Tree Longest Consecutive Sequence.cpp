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
    int currMax = INT_MIN;
    int longestConsecutive(TreeNode* root) {
        if(!root)
            return 0;
        helper(root);
        return currMax;
    }
    
    int helper(TreeNode* root){
        if(!root)
            return 0;
        int left = helper(root->left) + 1;
        int right = helper(root->right) + 1;
        if(root->left && root->left->val != root->val + 1){
            left = 1;
        }
        if(root->right && root->right->val != root->val + 1){
            right = 1;
        }
        currMax = max(currMax, max(left,right));
        return max(left,right);
    }
};
