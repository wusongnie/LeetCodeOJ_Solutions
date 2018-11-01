class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() <= 1)
            return;
        int firstPoint = -1;//first smaller item
        for(int i = nums.size() - 2; i >= 0; --i){
            if(nums[i] < nums[i + 1]){
                firstPoint = i;
                break;
            }
        }
        
        if(firstPoint == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        int secondPoint = -1;
        for(int i = nums.size() - 1; i >= 0; --i){
            if(nums[i] > nums[firstPoint]){
                secondPoint = i;
                break;
            }
                
        }
        swap(nums[secondPoint],nums[firstPoint]);
        reverse(nums.begin() + firstPoint + 1, nums.end());
        return;
        
    }
};
