class Solution {
    func frequencySort(_ s: String) -> String {
        var dic = [Character:Int]()
        for c in s.characters{
            if dic[c] == nil {
                dic[c] = 1
            }
            else{
                dic[c]! += 1
            }
        }
        var result = dic.sorted{ $0.value > $1.value }

        var ans = ""
        for (key,value) in result{
            for i in 0...value-1 {
                ans += (String)(key)
            }
        }
        return ans
    }
}
