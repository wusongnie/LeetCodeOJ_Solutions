class Solution {
    public int lengthOfLongestSubstring(String s) {
        int ans = 0;
        HashMap<Character, Integer> map = new HashMap<Character, Integer>();
        int j = 0;
        for(int i = 0; i < s.length(); ++i){
            if(map.containsKey(s.charAt(i)))
                j = Math.max(map.get(s.charAt(i)), j);
            ans = Math.max(ans, i - j + 1);
            map.put(s.charAt(i), i + 1);
        }
        return ans;
    }
}
