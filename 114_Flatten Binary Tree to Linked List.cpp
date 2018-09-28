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
    void flatten(TreeNode* root) {
        if(root == NULL) return;
        stack<TreeNode*> s;
        s.push(root);
        TreeNode* flattened = new TreeNode(0);
        TreeNode* curr =  flattened;
        while(!s.empty()){
            TreeNode* temp = s.top();
            curr->right = new TreeNode(temp->val);
            curr = curr->right;
            s.pop();
            if(temp->right != NULL)
                s.push(temp->right);
            if(temp->left != NULL)
                s.push(temp->left);
        }
        *root = *(flattened->right);
        
    }
};
