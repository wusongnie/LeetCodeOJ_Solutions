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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int N = preorder.size();
        if(N == 0) 
            return nullptr;
        TreeNode* root= new TreeNode(preorder[0]);
        if(N == 1) 
            return root;
        int L = 0;
        for(int i=0;i<N;++i){
            if(inorder[i]==preorder[0])
                L = i;
        }
        vector<int> p = vector<int>(preorder.begin() + 1, preorder.begin() + L + 1);
        vector<int> i = vector<int>(inorder.begin(), inorder.begin() + L);
        root->left = buildTree(p,i);
        p = vector<int> (preorder.begin() + L + 1, preorder.begin() + N);
        i = vector<int> (inorder.begin() + L + 1, inorder.begin() + N);
        root->right = buildTree(p,i);
        return root;
    }
    
};
