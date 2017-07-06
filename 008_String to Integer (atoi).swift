class Solution {
    func myAtoi(_ str: String) -> Int {
        var str1 = str.trimmingCharacters(in: .whitespaces)
        if str1.contains(" ")
        {
            str1 = str1.components(separatedBy: " ")[0]
        }
        let s = NSString(string:str1)
        return (Int)(s.intValue)
    }
}
