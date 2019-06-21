class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int numRows = board.size(), numCols = board[0].size();
        for (int row = 0; row < numRows; ++row) {
            for (int col = 0; col < numCols; ++col) {
                if (board[row][col] & 1) {
                    for ( int i = -1; i <= 1; ++i){
                        for ( int j = -1; j <=1 ; ++j){
                            if (i == 0 && j == 0) continue;
                            if ( row + i >= 0 && row + i < numRows && 
                                 col + j >= 0 && col + j < numCols)
                                board[row+i][col+j] += 2;
                        }
                    }                                        
                }
            }
        }
        
        for (auto& row : board){
            for (auto& grid : row){
                int neighbor = grid >> 1;
                grid = (grid & 1)? (( neighbor == 2 || neighbor == 3 )? 1 : 0) 
                                 : (( neighbor == 3 )? 1 : 0);
            }            
        }
    }
};
