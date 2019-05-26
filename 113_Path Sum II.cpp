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
    vector<vector<int>> res;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> set;
        helper(root, set, sum, 0);
        return res;
    }
    void helper(TreeNode* root, vector<int>& set, int sum, int curr){
        if(!root)
            return;
        set.push_back(root->val);
        if(!root->left && !root->right){
            if(curr + root->val == sum){
                res.push_back(set);
            }
        }
        helper(root->left, set, sum, curr + root->val);
        helper(root->right, set, sum, curr + root->val);
        set.pop_back();
    }
};
