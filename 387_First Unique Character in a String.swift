class Solution {
    func firstUniqChar(_ s: String) -> Int {
        var dic = [Character:Int]()
        for c in s.characters{
            if dic[c] == nil{
                dic[c] = 1
            }
            else{
                dic[c]! += 1
            }
        }
        var i = 0
        for c in s.characters{
            if dic[c] == 1{
                return i
            }
            i += 1
        }
        return -1
    }
}
