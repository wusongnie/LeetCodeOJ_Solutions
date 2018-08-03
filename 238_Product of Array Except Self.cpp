class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        vector<int> result(nums.size(),1);
        if(nums.size() == 0) return result;
        int begin = 1;
        int end = 1;
        for(int i = 0; i < nums.size(); ++i){
            result[i] *= begin;
            begin *= nums[i];
            result[nums.size() - i - 1] *= end;
            end *= nums[nums.size() - i - 1];
        }
        return result;
    }
};
