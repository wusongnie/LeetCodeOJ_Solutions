/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return nullptr;
        connect(root->left);
        connect(root->right);
        Node* left = root->left;
        Node* right = root->right;
        while(left){
            left->next = right;
            left = left->right;
            right = right->left;
        }
        
        return root;

    }
};
