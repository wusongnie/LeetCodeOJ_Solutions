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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        return helper(nums, l, r);
    }
    
    int maxV(vector<int>& nums, int l, int r) {
        int max_i = l;
        for (int i = l; i <= r; i++) {
            if (nums[max_i] < nums[i])
                max_i = i;
        }
        return max_i;
    }
    TreeNode* helper(vector<int>& nums, int l, int r){
        if(l > r)
            return nullptr;
        int curr = maxV(nums, l, r);
        TreeNode* root = new TreeNode(nums[curr]);
        root->left = helper(nums, l ,curr - 1);
        root->right = helper(nums, curr + 1 , r);
        return root;
    }
};
