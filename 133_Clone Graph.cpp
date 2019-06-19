/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;

    Node() {}

    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)
            return nullptr;
        auto res = new Node(node->val, vector<Node*>());
        unordered_map<Node*, Node*> mapping;
        stack<Node*> s;
        s.push(node);
        mapping[node] = res;
        while(!s.empty()){
            auto curr = s.top();
            s.pop();
            auto n = curr->neighbors;
            for(int i = 0; i < n.size(); ++i){
                if(mapping.find(n[i]) == mapping.end()){
                    mapping[n[i]] = new Node(n[i]->val, vector<Node*>());
                    s.push(n[i]);
                }
                mapping[curr]->neighbors.push_back(mapping[n[i]]);
            }
        }
        return res;
    }
};
