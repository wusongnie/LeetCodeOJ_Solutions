class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        dfs(nums, 0, curr, ans);
        return ans;
    }
    void dfs(vector<int>& nums, int s, vector<int>& curr, vector<vector<int>>& ans){
        unordered_set<int> seen;
        for(int i = s; i < nums.size(); ++i){
            if(!curr.empty() && nums[i] < curr.back())
                continue;
            if (seen.count(nums[i])) continue; 
            seen.insert(nums[i]);
            curr.push_back(nums[i]);
            if (curr.size() > 1) 
                ans.push_back(curr);
            dfs(nums, i + 1  , curr, ans);
            curr.pop_back();
        }
    }
};
