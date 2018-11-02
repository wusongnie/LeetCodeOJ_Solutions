class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int leftIdx = -1, rightIdx = -1;
        int maxValue = INT_MIN, minValue = INT_MAX;
        for(int i = 0; i < nums.size(); ++i){
            if(maxValue < nums[i]){
                maxValue = nums[i];
            }
            if(maxValue > nums[i]){
                rightIdx = i;
            }
        }
        
        for(int i = nums.size() - 1; i >= 0; --i){
            if(minValue > nums[i]){
                minValue = nums[i];
            }
            if(minValue < nums[i]){
                leftIdx = i;
            }
        }
        
        return (leftIdx == -1 || rightIdx == -1) ? 0 : rightIdx - leftIdx + 1;
    }
};
