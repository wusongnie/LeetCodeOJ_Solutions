class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> temp;
        if(n <= 0)
            return res;
        helper(res,k,n,temp);
        return res;
    }
    void helper(vector<vector<int>>& res, int k, int target,vector<int> current){
        if(target < 0) return;
        if(target == 0 && k == 0){
            res.push_back(current);
            return;
        }
        
        if(k == 0){
            return;
        }
        
        for(int i = 1; i < 10; i++){//loop from var start-->to avoid duplicate
            if(current.size() > 0 && (find(current.begin(), current.end(), i) != current.end() || i < current.back())){
                continue;
            }
            current.push_back(i);
            helper(res,k - 1,target - i,current);
            current.pop_back();
        }
    }
};
