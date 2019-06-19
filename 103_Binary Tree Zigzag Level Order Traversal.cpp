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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        helper(root, 1);
        for(int i = 0; i < res.size(); ++i){
            if(i % 2 == 1)
                reverse(res[i].begin(), res[i].end());
        }
        return res;
    }
    void helper(TreeNode* root, int dep){
        if(!root)
            return;
        if(dep > res.size()){
            vector<int> temp;
            temp.push_back(root->val);
            res.push_back(temp);
        }else{
            res[dep - 1].push_back(root->val);
        }
        helper(root->left, dep + 1);
        helper(root->right, dep + 1);
    }
};
