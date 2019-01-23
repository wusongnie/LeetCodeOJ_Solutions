class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int res = 0;
        vector<int> dp(nums.size(), 1);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i - 1]){
                dp[i] = dp[i - 1] + 1;
            }
        }
        for(int e : dp){
            res = max(res,e);
        }
        return res;
    }
};
