/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
    
public:
    
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream o;
        string res = "";
        read(root, o);
        res = o.str();
        return res;
    }
    
    void read(TreeNode* root, ostringstream& res){
        if(root == nullptr){
            res << "# ";
            return;
        }   
        else{
            res << root->val << " ";
        }
        read(root->left, res);      
        read(root->right, res);
        return;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream iss (data);
        return write(iss);
    }
    
    TreeNode* write(istringstream& iss){
        string temp = "";
        iss >> temp;
        if(temp == "#"){
            return nullptr;
        }
        
        TreeNode* node = new TreeNode(stoi(temp));
        node->left = write(iss);
        node->right = write(iss);
        return node;
    }
};
