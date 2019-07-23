class Solution {
public:
    int numWays(int n, int k) {
        if(n == 0)
            return 0;
        int same = 0;
        int diff = k;
        vector<int> dp(n + 1, 0);
        dp[1] = k;
        for(int i = 2; i <= n; ++i){
            same = diff;
            diff = dp[i - 1] * (k - 1);
            dp[i] = same + diff;
        }
        return dp[n];
    }
};
