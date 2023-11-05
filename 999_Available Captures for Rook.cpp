class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int col = 0;
        int row = 0;
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (board[i][j] == 'R') {
                    row = i;
                    col = j;
                    break;
                }
            }
        }
        return helper(board, row + 1, col, "down") + helper(board, row - 1, col, "up") + helper(board, row, col + 1, "right") + helper(board, row, col - 1, "left");
    }

    int helper(vector<vector<char>>& board, int i, int j, string direction) {
        if (i > 7 || i < 0 || j > 7 || j < 0) {
            return 0;
        }

        if (board[i][j] == 'B') {
            return 0;
        }

        if (board[i][j] == 'p') {
            return 1;
        }

        if (direction == "left"){
            return helper(board, i, j - 1, "left");
        }

        if (direction == "right"){
            return helper(board, i, j + 1, "right");
        }

        if (direction == "up"){
            return helper(board, i - 1, j, "up");
        }

        return helper(board, i + 1, j, "down");
        
    }
};
