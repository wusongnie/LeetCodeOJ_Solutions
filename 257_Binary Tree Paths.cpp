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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if(root == NULL)return result;
        helper(result, root, "");
        return result;
    }
    void helper(vector<string>& res, TreeNode* root, string curr){
        
        if(!root->left && !root->right){
            res.push_back(curr + to_string(root->val));
            return;
        }
        
        if(root->left){
            helper(res, root->left, curr + to_string(root->val) + "->");
        }
        
        if(root->right){
            helper(res, root->right, curr + to_string(root->val) + "->");
        }
    }
};
