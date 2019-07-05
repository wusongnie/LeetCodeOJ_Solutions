class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        perm(0, res, nums);
        return res;
    }
    
    void perm(int j, vector<vector<int>>& res, vector<int>& nums){
        if(j >= nums.size()){
            res.push_back(nums);
        }
        
        for(int i = j; i < nums.size(); ++i){
            swap(nums[i], nums[j]);
            perm(j + 1, res, nums);
            swap(nums[i], nums[j]);
        }
    }
    
};
