class Solution {
    func climbStairs(_ n: Int) -> Int {
        var k1 = 1
        var k2 = 1
        var k3 = 0
        var a = n
        while a > 1{
            k3 = k2
            k2 = k1 + k2
            k1 = k3
            a = a - 1
        }
        return k2
    }
}
