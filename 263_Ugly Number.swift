class Solution {
    func isUgly(_ num: Int) -> Bool {
        if num == 0{
            return false
        }
        if num == 1{
            return true
        }
        var k = num
        while k != 1{
            if k % 2 == 0{
                k = k / 2
            } else if k % 3 == 0{
                k = k / 3
            } else if k % 5 == 0{
                k = k / 5
            } else{
                return false
            }
        }
        return true
    }
}
