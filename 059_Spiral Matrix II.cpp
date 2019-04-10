class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res;
        if(n <= 0)
            return res;
        res = vector<vector<int>>(n, vector<int>());
        for(int i = 0; i < n; ++i){
            res[i] = vector<int>(n,0);
        }
        int rowBegin = 0;
        int rowEnd = n - 1;
        int colBegin = 0;
        int colEnd = n - 1;
        int curr = 1;
        while(rowBegin <= rowEnd && colBegin <= colEnd){
            // Traverse Right
            
            for (int j = colBegin; j <= colEnd; j ++) {
                res[rowBegin][j] = curr++;
            }
            rowBegin++;
            
            // Traverse Down
            for (int j = rowBegin; j <= rowEnd; j ++) {
                res[j][colEnd] = curr++;
            }
            colEnd--;
            
            if (rowBegin <= rowEnd) {
                // Traverse Left
                for (int j = colEnd; j >= colBegin; j --) {
                    res[rowEnd][j] = curr++;
                }
            }
            rowEnd--;
            
            if (colBegin <= colEnd) {
                // Traver Up
                for (int j = rowEnd; j >= rowBegin; j --) {
                    res[j][colBegin] = curr++;
                }
            }
            colBegin++;
        }
        return res;
    }
};
