/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> res;
    vector<int> postorder(Node* root) {
        helper(root);
        return res;
    }
    void helper(Node* root){
       if(!root)
           return;
       
       for(Node* n: root->children){
           helper(n);
       }
       res.push_back(root->val);
       return;
    }
};
