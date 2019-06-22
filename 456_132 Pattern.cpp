class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int minV = INT_MAX;
        for(int i = 0; i < nums.size(); ++i){
            minV = min(minV, nums[i]);
            for(int j = i + 1; j < nums.size(); ++j){
                if(nums[j] > minV && nums[j] < nums[i])
                    return true;
            }
        }
        return false;
    }
};
