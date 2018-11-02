class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        res.push_back(-1);
        res.push_back(-1);
        if(nums.size() == 0)
            return res;
        if(nums.size() == 1){
            if(target == nums[0]){
                res[0] = 0;
                res[1] = 0;
                return res;
            }else{
                return res;
            }
        }
        int l = 0;
        int r = nums.size() - 1;
        int index = -1;

        while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] == target){
                index = mid;
                break;
            }
            if(nums[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        
        if(index == -1)
            return res;
        
        int start = index;
        int end = index;
        while(start >= 0 && nums[start] == nums[index]){
            start--;
        }
        res[0] = start + 1;
        while(end <= nums.size() - 1 && nums[end] == nums[index]){
            end++;
        }
        res[1] = end - 1;
        return res;
        
    }
};
