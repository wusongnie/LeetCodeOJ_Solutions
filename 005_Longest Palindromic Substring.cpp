class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int l = 0;
        int r = 0;
        for (int i = 0; i < s.length();++i){
            l = i;
            r = i;
            while(l > 0 && r < s.length() - 1 && s[l - 1] == s[r + 1]){
                l--;
                r++;
            }
            if (r - l + 1 > ans.length())
                ans = s.substr(l, r - l + 1);
        }
        
        
        for (int i = 0; i < s.length();++i){
            if(s[i] == s[i + 1]){
                l = i;
                r = i + 1;
                while(l > 0 && r < s.length() - 1 && s[l - 1] == s[r + 1]){
                        l--;
                        r++;
                }
                if (r - l + 1 > ans.length())
                    ans = s.substr(l, r - l + 1);

            }
        }
        return ans;
    }
};
