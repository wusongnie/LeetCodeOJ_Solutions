class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size() <= 1)
            return nums.size();
        int dp[nums.size()];
        for(int i = 0; i < nums.size(); ++i){
            dp[i] = 1;
        }
        int ans = 0;

        for(int i = 1; i < nums.size(); ++i){
            for(int j = 0; j < i;++j){
                if(nums[j] < nums[i]){
                    dp[i] = max(dp[j] + 1, dp[i]);
                }
            }
        }
        for(int i = 0; i < nums.size(); ++i){
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};
