class Solution {
    public String convertToTitle(int n) {
        String ans = "";
        
        while(n > 0){
            int temp = n % 26;
            if(temp == 0){
                ans = 'Z' + ans;
                n = n / 26 - 1;
            }
            else{
                ans = (char)(64 + n % 26) + ans;
                n = n / 26;
            }
        }
        return ans;
    }
}
