class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int curr = T.size() - 1;
        vector<int> res;
        res.resize(T.size());
        stack<int> s;
        while(curr >= 0){
            while(!s.empty() && T[s.top()] <= T[curr]){
                s.pop();
            }
            res[curr] = s.empty() ? 0 : s.top() - curr;
            s.push(curr--);
        }
        return res;
    }
};
