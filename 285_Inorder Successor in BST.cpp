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
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        if(root == nullptr)
          return nullptr;

        if (p->val < root->val) {
          TreeNode *result = inorderSuccessor(root->left, p);
          if (result != nullptr){
              return result;
          }
          return root;
        }
        return inorderSuccessor(root->right, p);
    }
};
