/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    stack<TreeNode*> s;
    BSTIterator(TreeNode* root) {
        TreeNode* temp = root;
        while(temp != NULL){
            s.push(temp);
            temp = temp->left;
        }
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode* temp = s.top();
        s.pop();
        int res = temp->val;
        temp = temp->right;
        while(temp != NULL){
            s.push(temp);
            temp =  temp->left;
        }
        return res;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !s.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
