class Solution {
public:
    int minCost(vector<vector<int>>& costs) {
        if(costs.size() <= 0)
            return 0;
        int res = INT_MAX;
        vector<vector<int>>dp(costs.size(), vector<int>(3,0));
        dp[0] = costs[0];
        for(int i = 1; i < costs.size(); ++i){
            dp[i][0] = min((dp[i - 1][1] + costs[i][0]), (dp[i - 1][2] + costs[i][0]));
            dp[i][1] = min((dp[i - 1][0] + costs[i][1]), (dp[i - 1][2] + costs[i][1]));
            dp[i][2] = min((dp[i - 1][1] + costs[i][2]), (dp[i - 1][0] + costs[i][2]));
        }
        for(int i = 0; i <= 2; ++i){
            if(dp[costs.size() - 1][i] < res)
                res = dp[costs.size() - 1][i];
        }
        
        return res;
    }
};
