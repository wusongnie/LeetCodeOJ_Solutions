class Solution {
    func countBattleships(_ board: [[Character]]) -> Int {
        var ans=0
        if(board==nil||board.count==0||board[0].count==0)
        {
            return 0;
        }
        for i in 0...(board.count-1)
        {
            for j in 0...(board[0].count-1)
            {
                if(board[i][j]=="X"&&(i==board.count-1||board[i+1][j]==".")&&(j==board[0].count-1||board[i][j+1]==".")){
                    ans=ans+1
                }
            }
        }
        return ans
    }
}
