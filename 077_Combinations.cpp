class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> temp;
        helper(result,temp,n,1,k);
        return result;
    }
    void helper(vector<vector<int>>& res, vector<int>& curr, int n, int start, int k){
        if(k == 0){
            res.push_back(curr);
            return;
        }else{
            for(int i = start; i <= n && i + k <= n + 1; ++i){
                curr.push_back(i);
                helper(res,curr,n,i + 1,k - 1);
                curr.pop_back();
            }
        }
    }
};
