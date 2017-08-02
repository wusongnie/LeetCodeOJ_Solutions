class Solution {
    func isPerfectSquare(_ num: Int) -> Bool {
        for i in 0...num{
            if i*i == num{
                return true
            }
            if i*i > num{
                return false
            }
        }
        return false
    }
}
