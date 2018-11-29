/*
// Definition for a Node.
class Node {
public:
    int val = NULL;
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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(!root)
            return res;
        queue<Node*>q;
        q.push(root);
        int l = q.size();
        while(!q.empty()){
            vector<int> temp;
            for(int i = 0; i < l; ++i){
                Node* top = q.front();
                temp.push_back(top->val);
                q.pop();
                for(Node* n: top->children){
                    q.push(n);
                }
            }
            l = q.size();
            res.push_back(temp);
        }
        return res;
    }
};
