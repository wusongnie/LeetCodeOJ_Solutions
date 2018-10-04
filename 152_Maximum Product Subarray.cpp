class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>dp = nums;
        if(nums.size() == 1) return nums[0];
        int res = nums[0];
        int maxV = res;
        int minV = res;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] < 0){
                int temp = minV;
                minV = maxV;
                maxV = temp;
            }
                
            maxV = max(nums[i], maxV*nums[i]);
            minV = min(nums[i], minV*nums[i]);
            res = maxV > res ? maxV : res;
        }
        return res;
    }
};
