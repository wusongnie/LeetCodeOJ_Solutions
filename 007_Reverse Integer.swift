class Solution {
    func reverse(_ x: Int) -> Int {
        var flag = 1
        var string = ""
        if x<0 {
            flag = -1
            string = "\(-x)"
        }else{
            string = "\(x)"
        }
        var str = String(string.characters.reversed())
        var ans = Int(str)! * flag
        if ans > 2147483647 || ans < -2147483647{
            return 0
        }
        return ans
    }
}
