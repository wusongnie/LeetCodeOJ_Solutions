class Solution {
public:
    int rob(vector<int>& nums) {
        int maxV = 0;
        if(nums.size() < 1)
            return 0;
        if(nums.size() <= 2){
            for(int num: nums){
                if(maxV < num) maxV = num;
            }
            return maxV;
        }
        
        vector<int> dp(nums.size() + 3,0);
        dp[0] = nums[0];
        dp[1] = nums[1];
        dp[2] = nums[2] + dp[0];
        for(int i = 3; i < nums.size(); i++){
            dp[i] = max(dp[i - 2],dp[i - 3]) + nums[i];
        }
        int res = 0;
        for(int v: dp){
            if(v > res)  
                res = v;
        }
        return res;
        
    }
};
