class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() <= 1) return true;
        int curr = 0;
        for(int j = 0; j < nums.size(); ++j){
            if(curr >= nums.size() - 1) return true;
            if(j > curr) return false;
            curr = max(curr, j + nums[j]);
        }
        
        return false;
    }
};
