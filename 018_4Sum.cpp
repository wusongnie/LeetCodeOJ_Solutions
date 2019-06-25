class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        if(nums.size() <= 3) return ans;
        for(int i = 0; i < nums.size() - 3; ++i){
            if(i > 0 && i < nums.size() - 3 && nums[i] == nums[i - 1])
                continue;
            for(int j = i + 1; j < nums.size() - 2; j++){
                if(nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target)
                    break;
                if(nums[i] + nums[j] + nums[nums.size() - 1] + nums[nums.size() - 2]< target)
                    continue;
                if(j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                vector<int> temp;
                int l = j + 1;
                int r = nums.size() - 1;
                while(l < r){
                    if(nums[l] + nums[r] + nums[i] + nums[j] == target){
                        temp.clear();
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[r]);
                    
                        ans.push_back(temp);
                    
                        while(l < r && nums[l] == nums[l+1])
                            l++;
                        while(l < r && nums[r] == nums[r-1])
                            r--;
                        l++;
                        r--;
                    }else if(nums[l] + nums[r] + nums[i] + nums[j] > target){
                        r--;
                    }
                    else
                        l++;
                }
            }        
        }
        return ans;
    }
};
