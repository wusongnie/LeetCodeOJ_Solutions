class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        if(nums.size() <= 2) return ans;
        for(int i = 0; i < nums.size() - 2; ++i){
            vector<int> temp;
            while(i > 0 && i < nums.size() - 2 && nums[i] == nums[i - 1])
                i++;
            int l = i + 1;
            int r = nums.size() - 1;
            while(l < r){
                if(nums[l] + nums[r] + nums[i] == 0){
                    temp.clear();
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    ans.push_back(temp);
                    
                    while(l < r && nums[l] == nums[l+1])
                        l++;
                    while(l < r && nums[r] == nums[r-1])
                        r--;
                    l++;
                    r--;
                }else if(nums[l] + nums[r] + nums[i] > 0){
                    r--;
                }
                else
                    l++;
            }         
        }
        return ans;
    }
};
