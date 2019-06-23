class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size() - 1;
        int res = 0;
        while(l < r){
            res += nums[r--] -nums[l++] ;
        }
        return res;
    }
};
