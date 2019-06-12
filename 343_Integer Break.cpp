class Solution {
public:
    int integerBreak(int n) {
        // dp[i] = i * dp[n - i]
        vector<int> dp(n + 1, 1);
        int res = 0;
        for(int i = 1; i <= n; ++i){
            int maxV = 0;
            for(int j = 1; j < i; ++j){
                maxV = maxV < j * (i - j) ? j * (i - j) : maxV;
                maxV = maxV < j * dp[i - j] ? j * dp[i - j] : maxV;
            } 
            dp[i] = maxV;
        }
        return dp[n];
    }
};
