public class Solution {
    public int[] plusOne(int[] digits) {
        int c = digits.length-1;
        int jw = 0;
        digits[digits.length - 1] += 1;
        while(c>=0){
            digits[c] = digits[c] + jw;
            if (digits[c]>=10){
                digits[c] -= 10;
                jw = 1;
            }
            else{
                jw = 0;
            }
            c -= 1;
        }
        int [] ans = null;
        if (jw == 1){
             ans = new int[digits.length+1];
             ans[0] = 1;
             for (int i = 1;i<digits.length - 1;i++){
                 ans[i] = digits[i];
             }
            return ans;
        }else{
            return digits;
        }
    }
}
