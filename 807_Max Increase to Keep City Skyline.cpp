class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int N = grid.size();
        int res = 0;
        vector<int> rowMax = vector(N,0);
        vector<int> colMax = vector(N,0);
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[0].size(); ++j){
                rowMax[i] = max(rowMax[i], grid[i][j]);
                colMax[j] = max(colMax[j], grid[i][j]);
            }
        }
        
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[0].size(); ++j){
                res += min(rowMax[i], colMax[j]) - grid[i][j];
            }
        }
        return res;
    }
};
