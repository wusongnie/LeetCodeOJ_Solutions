class Solution {
public:
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.size() < 1) return 0;
        int res = 0;
        
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[0].size(); ++j){
                 if(grid[i][j] == 1){
                     int curr = 0;
                     mark(i,j,grid,curr);
                     if(curr > res)
                         res = curr;
                 }
            }
        }
        return res;
    }
    
    void mark(int i, int j, vector<vector<int>>& grid, int& curr){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return;
        
        if(grid[i][j] == 0)
            return;
        
        else{
            curr++;
            grid[i][j] = 0;
            mark(i + 1, j, grid, curr);
            mark(i - 1, j, grid, curr);
            mark(i, j + 1, grid, curr);
            mark(i, j - 1, grid, curr);
        }
    }
};
