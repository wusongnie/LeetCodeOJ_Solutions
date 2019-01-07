class MovingAverage {
public:
    deque<int> q;
    double sum = 0;
    int maxSize = 0;

    /** Initialize your data structure here. */
    MovingAverage(int size) {
        q = deque<int>();
        maxSize = size;
    }
    
    double next(int val) {
        if(q.size() < maxSize){
            q.push_front(val);
            sum += val;
            return sum / q.size();
        }
        sum = sum - q.back() + val;
        q.pop_back();
        q.push_front(val);
        return sum / q.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */
