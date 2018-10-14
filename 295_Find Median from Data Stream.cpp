class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int, vector<int>, greater<int>> right;
    priority_queue<int> left;
    double median;
    MedianFinder() {
        median = 0;
    }
    
    void addNum(int num) {
        if(num < this->median){
            left.push(num);
        }else{
            right.push(num);
        }
        if (right.size() > left.size() + 1) {
            left.push(right.top());
            right.pop();
        }
        if (left.size() > right.size()+1) {
            right.push(left.top());
            left.pop();
        }
        if (right.size() == left.size()) 
            median = (left.top() + right.top())/2.0;
        else if(right.size() > left.size()) 
            median = (double)right.top();
        else if (right.size() < left.size()) 
            median = (double)left.top();
                    
    }
    
    double findMedian() {
        return this->median;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */
