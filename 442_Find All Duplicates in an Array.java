class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
        List<Integer> ans = new ArrayList<Integer>();
        for (int n : nums){
            if (map.get(n) == null){
                map.put(n,1);    
            }else{
                map.put(n,map.get(n)+1);
            }
        }
        for (Map.Entry<Integer, Integer> en:map.entrySet()){
            if(en.getValue()>1){
                ans.add(en.getKey());
            }
        }
        return ans;
    }
}
