class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        last_at_top.push(x);
        transfer();
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int temp = peek();
        first_at_top.pop();
        transfer();
        return temp;
    }
    
    /** Get the front element. */
    int peek() {
        return first_at_top.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return last_at_top.empty() && first_at_top.empty();
    }
    void transfer(){
        if(!first_at_top.empty())
            return;
        while(!last_at_top.empty()){
            first_at_top.push(last_at_top.top());
            last_at_top.pop();
        }
    }
    stack<int> last_at_top;
    stack<int> first_at_top;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
