class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int res = 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(!map.count(sum)) 
                map[sum] = i;
            if(sum == k) 
                res = i + 1;
            else if(map.count(sum - k) > 0) 
                res = max(res, i - map[sum - k]);
        }
        
        return res;
    }
};
