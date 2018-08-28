class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int diff = INT_MAX;
        for(int i = 0; i < nums.size() - 2; ++i){
            int l = i + 1;
            int r = nums.size() - 1;
            while(l < r){
                int sum = nums[l] + nums[r] + nums[i];
                if(sum > target){
                    if(abs(sum - target) < diff){
                        ans = sum;
                        diff = abs(sum - target);
                    }
                    r--;
                }else if (sum < target){
                    if(abs(sum - target) < diff){
                        ans = sum;
                        diff = abs(sum - target);
                    }
                    l++;
                }else{
                    return sum;
                }
            }
        }
        return ans;
    }
};
