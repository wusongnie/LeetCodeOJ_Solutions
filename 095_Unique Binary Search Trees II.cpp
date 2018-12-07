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
    
    vector<TreeNode*> generateTrees(int n) {
        if(n <= 0)
            return vector<TreeNode*>();
        return helper(1,n);
    }
    vector<TreeNode*> helper(int start, int end){
        vector<TreeNode*> result;
        if(start > end){
            result.push_back(NULL);
		    return result;
        }
        if(start == end){
            result.push_back(new TreeNode(start));
		    return result;
        }
	    for(int i = start; i <= end; ++i){
		    vector<TreeNode*>left = helper(start, i - 1);// left
		    vector<TreeNode*>right = helper(i + 1, end);//right
		    for(int j = 0; j < left.size(); ++j){
			    TreeNode* currLeft = left[j];
			    for(int k = 0; k < right.size(); ++k){
                    TreeNode* currRight = right[k];
                    TreeNode* newNode = new TreeNode(i);
                    newNode->left = currLeft;
                    newNode->right = currRight;
                    result.push_back(newNode);
                }
            }
        }
        return result;
		
	}
};
