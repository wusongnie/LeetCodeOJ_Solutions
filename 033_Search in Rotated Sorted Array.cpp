class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0) 
            return -1;
        int start = 0;
        int end = nums.size() - 1;
        
        while(start < end){
            int mid = (end + start) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[start] <= nums[mid]){
                if(target >= nums[start] && target < nums[mid]){
                    end = mid - 1;
                } else{
                    start = mid + 1;
                }
            }else{
                if(target <= nums[end] && target > nums[mid]){
                    start = mid + 1;
                } else{
                    end = mid - 1;
                }
            }
        }
        return nums[start] == target ? start : -1;
    }
};
