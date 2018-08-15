class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size() == 0)return 0;
        int dp[grid.size()][grid[0].size()];
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[0].size(); ++j){
                int up = 0;
                int left = 0;
                if(i == 0 && j == 0){
                    dp[i][j] = grid[i][j];
                    continue;
                }
                if(i == 0){
                    left = dp[i][j - 1];
                    dp[i][j] = left + grid[i][j];
                    continue;
                }
                if(j == 0){
                    up = dp[i - 1][j];
                    dp[i][j] = up + grid[i][j];
                    continue;
                }
                up = dp[i - 1][j];
                left = dp[i][j - 1];
                dp[i][j] = min(up,left) + grid[i][j];
            }
        }
        return dp[grid.size() - 1][grid[0].size() - 1];
    }
};
