/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class NestedIterator {
public:
    vector<int> vec;
    int track;
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        helper(nestedList);
    }

    void helper(vector<NestedInteger> &nestedList){
        track = 0;
        queue<NestedInteger> q;
        for(auto e:nestedList){
            q.push(e);
        }
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            if(curr.isInteger()){
                vec.push_back(curr.getInteger());
            }else{
                helper(curr.getList());
            }
        }
    }
    int next() {
        return vec[track++];
    }

    bool hasNext() {
        return track < vec.size();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
