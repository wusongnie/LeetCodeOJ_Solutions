class Solution {
    func arrangeCoins(_ n: Int) -> Int {
        var sum=0
        var ans=0
        for i in 0...n{
            sum=sum+i
            if(sum==n){
                return i
            }
            if(sum>n)
            {
                ans=i-1
                break
            }
        }
        return ans
    }
}
