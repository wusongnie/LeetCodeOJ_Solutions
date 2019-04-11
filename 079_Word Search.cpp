class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(word.size() <= 0)
            return true;
        bool res = false;
        for(int i = 0; i < board.size(); ++i){
            for(int j = 0; j < board[0].size(); ++j){
                if(board[i][j] == word[0]){
                    board[i][j] += 60;
                    res = res || expand(board,word,1,i,j);
                    board[i][j] -= 60;
                }
            }
        }
        return res;
    }
    bool expand(vector<vector<char>>& board, string word, int remain,int i, int j) {
        if(remain > word.size() - 1)
            return true;
        //down
        bool res = false;
        if(i - 1 >= 0){
            if(board[i - 1][j] == word[remain]){
                board[i - 1][j] += 60;
                res = res || expand(board,word,remain + 1,i - 1,j);
                board[i - 1][j] -= 60;
            }
        }
        //up
        if(i + 1 <= board.size() - 1){
            if(board[i + 1][j] == word[remain]){
                board[i + 1][j] += 60;
                res = res || expand(board,word,remain + 1,i + 1,j);
                board[i + 1][j] -= 60;
            }
        }
        //left
        if(j - 1 >= 0){
            if(board[i][j - 1] == word[remain]){
                board[i][j - 1] += 60;
                res = res || expand(board,word,remain + 1,i,j - 1);
                board[i][j - 1] -= 60;
            }
                
        }
        //right
        if(j + 1 <= board[0].size() - 1){
            if(board[i][j + 1] == word[remain]){
                board[i][j + 1] += 60;
                res = res || expand(board,word,remain + 1,i,j + 1);
                board[i][j + 1] -= 60;
            }
        }
        return res;
    }
};
