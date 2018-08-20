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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        deque<TreeNode*> dq;
        dq.push_back(root);
        int num = 1;
        while(!dq.empty()){
            num = dq.size();
            vector<int> temp;
            temp.clear();
            while(num > 0){
                TreeNode * curr = dq.front();
                dq.pop_front();
                temp.insert(temp.begin(),curr->val);
                if(curr->right != NULL){
                    dq.push_back(curr->right);
                }
                if (curr->left != NULL){
                    dq.push_back(curr->left);
                }
                num--;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
