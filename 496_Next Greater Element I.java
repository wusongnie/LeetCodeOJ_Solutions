class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int [] ans = new int[nums1.length];
        HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
        for (int i = 0; i < nums2.length; ++i)
        {
            boolean flag = false;
            for(int j = i; j < nums2.length; ++j) {
                if(nums2[i]<nums2[j]){
                    map.put(nums2[i],nums2[j]);
                    flag = true;
                    break;
                }
            }
            if (!flag){
                map.put(nums2[i],-1);
            }
        }
        for (int i = 0; i < nums1.length; ++i){
            ans[i] = map.get(nums1[i]);
        }
        return ans;
    }
}
