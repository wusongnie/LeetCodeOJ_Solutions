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
    int rangeSumBST(TreeNode* root, int L, int R) {
        return helper(root,L,R);
    }
    int helper(TreeNode* root, int L, int R){
        if(!root)
            return 0;
        if(root->val < L)
            return helper(root->right, L, R);
        if(root->val > R)
            return helper(root->left, L, R);
        return root->val + helper(root->left, L, R) + helper(root->right, L, R);
    }
};
