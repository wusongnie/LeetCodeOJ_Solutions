public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int ans = 0;
        char[] s = Integer.toBinaryString(n).toCharArray();
        for(char c:s){
            if (c == '1'){
                ans += 1;
            }
        }
        return ans;
    }
}
