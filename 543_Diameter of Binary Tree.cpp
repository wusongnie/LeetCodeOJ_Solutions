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
    int res = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        length(root);
        return res;
    }
    int length(TreeNode* root){
        if(root == NULL)
            return 0;
        int l = length(root->left);
        int r = length(root->right);
        res = l + r > res ? l + r : res;
        return max(l + 1, r + 1);
    }
};
