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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* curr = root;
        while(curr != nullptr && curr->val != val){
            if(curr->val > val){
                curr = curr -> left;
            }
            else{
                curr = curr -> right;
            }
        }
        return curr;
    }
};
