class Solution {
public:
    void helper(vector<vector<int>>& res, vector<int>& nums,vector<int> curr,int s){
        res.push_back(curr);
        for(int i = s; i < nums.size(); ++i){
            if(i > s && nums[i - 1] == nums[i])
                continue;
            curr.push_back(nums[i]);
            helper(res,nums,curr,i + 1);
            curr.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        sort(nums.begin(),nums.end());
        int s = 0;
        helper(res,nums,curr,s);
        return res;
    }
};
