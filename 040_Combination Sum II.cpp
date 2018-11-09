class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        if(candidates.size() <= 0)
            return res;
        helper(res,candidates,target,temp, 0);
        return res;
    }
    void helper(vector<vector<int>>& res, vector<int>& candidates, int target,vector<int> current,int start){
        if(target < 0) return;
        if(target == 0){
            res.push_back(current);
            return;
        }
        for(int i = start; i < candidates.size(); i++){//loop from var start-->to avoid duplicate
            if(i != start && candidates[i] == candidates[i - 1]) continue;
            current.push_back(candidates[i]);
            helper(res,candidates,target - candidates[i],current, i + 1);
            current.pop_back();
        }
    }
};
