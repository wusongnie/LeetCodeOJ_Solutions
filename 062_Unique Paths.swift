class Solution {
    func uniquePaths(_ m: Int, _ n: Int) -> Int {
        var pic = Array(repeating: Array(repeating: 0, count: n),count: m)
        for i in 0...pic.count-1{
            for j in 0...pic[0].count-1{
                if i == 0||j == 0{
        			pic[i][j] = 1
        		}
        		else
        		{
        			pic[i][j] = pic[i-1][j]+pic[i][j-1]
        		}
            }
        }
        return pic [m-1][n-1]
    }
}
