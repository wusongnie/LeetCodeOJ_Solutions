class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < board.size(); i++){
            unordered_set<char> row;
            unordered_set<char> col;
            unordered_set<char> cube;
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] != '.' && !row.insert(board[i][j]).second) return false;
                if(board[j][i] != '.' && !col.insert(board[j][i]).second) return false;
                int rowIdx = 3 * (i / 3);
                int colIdx = 3 * (i % 3);
                
                if(board[rowIdx + j / 3][colIdx + j % 3] != '.' && !cube.insert(board[rowIdx + j / 3][colIdx + j % 3]).second)
                    return false;
            }
        }
        return true;
    }
};
