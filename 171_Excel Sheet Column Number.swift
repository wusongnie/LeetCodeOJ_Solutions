class Solution {
    func titleToNumber(_ s: String) -> Int {
        
        let asciis = s.unicodeScalars
        
        var num = Int(pow(26.0, (Double(asciis.count)-1)))
        var ans:Int = 0
        
        for ascii in asciis{
            
            ans = ans + num * Int(ascii.value - 64)
            num = num / 26
        }
        return ans
    }
}
