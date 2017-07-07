class Solution {
    func isPalindrome(_ x: Int) -> Bool {
        let s = Array("\(x)".characters)
        for i in 0 ... s.count/2{
            if s[i]==s[s.count-1-i]{
                continue
            }
            else
            {
                return false
            }
        }
        return true
    }
}
