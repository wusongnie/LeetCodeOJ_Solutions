class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size() <= 0)  return 1;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] <= 0){
                nums[i] = INT_MAX;
            }
        }
        
        for(int i = 0; i < nums.size(); ++i){
            int num = abs(nums[i]);
            if(num <= nums.size()){
                nums[num - 1] = -abs(nums[num - 1]);
            }
        }
        
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] > 0)
                return i + 1;
        }
        return nums.size() + 1;
    }
};
