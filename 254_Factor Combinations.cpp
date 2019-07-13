class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> getFactors(int n) {
        if(n == 1){
            return res;
        }
        vector<int> curr;
        helper(curr, n, 0);
        return res;
    }
    
    void helper(vector<int>& curr, int n, int prev){
        if(n == 1){
            if(curr.size() == 1){
                return;
            }
            res.push_back(curr);
            return;
        }
        for(int i = 2; i <= n; ++i){
            if(n % i == 0 && i >= prev){
                curr.push_back(i);
                helper(curr, n / i, i);
                curr.pop_back();
            }
        }
    }
    
};
