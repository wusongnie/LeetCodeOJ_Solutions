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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        deque<TreeNode*> dq;
        dq.push_back(root);
        int num = 1;
        while(!dq.empty()){
            TreeNode* curr = dq.front();
            ans.push_back(curr->val);
            num = dq.size();
            while(num > 0){
                curr = dq.front();
                dq.pop_front();
                if(curr->right != NULL){
                    dq.push_back(curr->right);
                }
                if (curr->left != NULL){
                    dq.push_back(curr->left);
                }
                num--;
            }
        }
        return ans;
    }
};
