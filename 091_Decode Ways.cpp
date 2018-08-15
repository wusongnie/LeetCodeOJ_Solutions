class Solution {
public:
    int numDecodings(string s) {
        int ans = 0;
        int dp[s.length()];
        if(s.length() > 0)
            dp[0] = 1;
        else
            return 0;
        if(s[0] - 48 == 0)
            dp[0] = 0;

        for(int i = 1; i < s.length(); ++i){
            if(s[i] - 48 == 0){
                if(s[i - 1] - 48 <= 2 && s[i - 1] - 48 >= 1){
                    if(i > 1)
                        dp[i] = dp[i - 2];
                    else 
                        dp[i] = 1;
                    continue;
                }else{
                    return 0;
                }
            }  
            if((s[i - 1] - 48) * 10 + s[i] - 48 <= 26 && (s[i - 1] - 48) != 0){
                if(i > 1)
                    dp[i] = dp[i - 1] + dp[i - 2];
                else if(s[i - 1] - 48 != 0)
                    dp[i] = dp[i - 1] + 1;
                else
                    dp[i] = dp[i - 1];
            }
            else{
                dp[i] = dp[i - 1];
            }
        }
        return dp[s.length() - 1];
    }
};
