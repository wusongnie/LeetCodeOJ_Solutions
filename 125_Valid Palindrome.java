class Solution {
    public boolean isPalindrome(String s) {
        char[] b = s.toCharArray();
        String ss = "";
        for(char c : b){
            if(c >= 65 && c <= 90 || c >= 97 && c <= 122 || c >= 48 && c <= 57)
                ss += c;
        }
        char[] a = ss.toCharArray();
        int l = 0;
        int r = ss.length() - 1;
        if(ss.length() <= 1) return true;
        while(l < r){
            if(a[r] == a[l] || a[r] - a[l] == 32 && a[l] >= 65 && a[l] <= 90 || a[l] - a[r] == 32 && a[r] >= 65 && a[r] <= 90){
                l++;
                r--;
            }else{
                return false;
            }
        }
        return true;
    }
}
