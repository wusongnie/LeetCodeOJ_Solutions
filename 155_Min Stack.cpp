class MinStack {
public:
    /** initialize your data structure here. */
    
    stack<int> s;
    struct node
    {
        int data;
        node* next;
    };

    node* top_node;
    
    
    MinStack() {
        int min_value = INT_MAX;
        node* top = nullptr;
    }
    
    void push(int x) {
        node* new_node = new node;
        new_node->data = x;
        new_node->next = top_node;
        top_node = new_node;
        if(s.empty()){
            s.push(x);
        }else if(x <= s.top()){
            s.push(x);
        }
    }
    
    void pop() {
        node* victim = top_node;
        top_node = top_node->next;
        if(victim->data == s.top()){
            s.pop();
        }
        delete victim;
    }
    
    int top() {
        return top_node->data;
    }
    
    int getMin() {
        return s.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
