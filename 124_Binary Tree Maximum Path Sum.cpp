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
    int res = INT_MIN;
    int maxPathSum(TreeNode* root) {
        if(!root)
            return 0;
        maxSum(root);
        return res;
    }
    
    int maxSum(TreeNode* root) {
        if(!root)
            return 0;
        int left = max(0,maxSum(root->left));
        int right = max(0,maxSum(root->right));
        
        if(left < 0 && right < 0)
            return root->val;
        
        int curr = max(left, right) + root->val;
        
        res = max(res, left + right + root->val);
        res = max(res, curr);
        
        
        return curr;
    }
};
