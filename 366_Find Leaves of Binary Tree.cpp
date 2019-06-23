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
    vector<vector<int>> findLeaves(TreeNode* root) {
        vector<vector<int>> res;
        if(!root)
            return res;
        helper(res, root, 0);
        
        return res;
    }
    int helper(vector<vector<int>>& res, TreeNode* root, int depth){
        if(depth >= res.size()){
            vector<int> temp;
            res.push_back(temp);
        }
        if(!root)
            return 0;
        int l = 0;
        int r = 0;
        int index = 0;
        if(root->left){
            l = helper(res, root->left, depth + 1);
        }
        if(root->right){
            r = helper(res, root->right, depth + 1);
        }
        index = max(r,l);
        res[index].push_back(root->val);
        return index + 1;
    }
};
