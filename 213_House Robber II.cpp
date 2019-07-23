class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0) 
            return 0;
        if(n==1) 
            return nums[0];
        
        vector<int> start(n); 
        vector<int> end(n); 
        start[0]=nums[0];
        end[n-1]=nums[n-1];
        start[1] = max(nums[1],start[0]);
        end[n-2] = max(nums[n-2],end[n-1]);
        for(int i=2;i<n;i++){
            start[i] = max(nums[i]+start[i-2],start[i-1]);
        }
        for(int i=n-3;i>=0;i--){
            end[i] = max(nums[i]+end[i+2],end[i+1]);
        }
        return max(end[1],start[n-2]);
    }
};
