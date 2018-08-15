class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> grid = obstacleGrid;
        if(grid.size() == 0 || grid[0][0] == 1) return 0;
        int dp[grid.size()][grid[0].size()];
        
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[0].size(); ++j){
                if(grid[i][j] == 1){
                    dp[i][j] = 0;
                    continue;
                }
                int up = 0;
                int left = 0;
                if(i == 0 && j == 0){
                    dp[i][j] = 1;
                    continue;
                }
                if(i == 0){
                    dp[i][j] = dp[i][j - 1];
                    continue;
                }
                if(j == 0){
                    dp[i][j] = dp[i - 1][j];
                    continue;
                }
                up = dp[i - 1][j];
                left = dp[i][j - 1];
                dp[i][j] = up + left;
            }
        }
        return dp[grid.size() - 1][grid[0].size() - 1];
    }
    
};
