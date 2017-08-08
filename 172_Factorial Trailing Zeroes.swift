class Solution {
    func trailingZeroes(_ n: Int) -> Int {
        
        var five = 0
        if n == 0 {
            return 0
        }
        var k = n
        while k>0{
            k = k/5
            five = five+k
        }
        return five
    }
}
