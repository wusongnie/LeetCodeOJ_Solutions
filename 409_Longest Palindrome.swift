class Solution {
    func longestPalindrome(_ s: String) -> Int {
        var ans = 0
        var k = 0
        var dic = [Character: Int]()
        for char in s.characters{
            if dic[char] != nil{
            dic[char] = 1 + dic[char]!
            }else{
                dic[char] = 1
            }
        }
        for value in dic.values{
            ans = ans + value / 2
            if value % 2 == 1{
                k = 1
            }
            
        }
        return 2*ans+k
    }
}
