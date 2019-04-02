class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // sanity check
        if(matrix.size() <= 0)
            return false;
        if(matrix[0].size() <= 0)
            return false;
        int i = 0;
        int j = matrix[0].size() - 1;
        while(j >= 0 && i <= matrix.size() - 1){
            if(matrix[i][j] == target){
                return true;
            }
            if(matrix[i][j] > target){
                j--;
            }else{
                i++;
            }
        }
        
        return false;
        
    }
};
