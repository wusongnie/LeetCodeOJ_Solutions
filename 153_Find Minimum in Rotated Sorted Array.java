class Solution {
    public int findMin(int[] nums) {
        int ans = Integer.MAX_VALUE;
        for(int i:nums){
            if(i < ans)
                ans = i;
        }
        return ans;
    }
}
