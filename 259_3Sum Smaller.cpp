class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        if(nums.size() <= 2) return 0;
        for(int i = 0; i < nums.size() - 2; ++i){
            int l = i + 1;
            int r = nums.size() - 1;
            while(l < r){
                if(nums[l] + nums[r] + nums[i] < target){
                    ans += r - l;
                    l++;
                }else{
                    r--;
                }
            }         
        }
        return ans;
    }
};
