class Solution {
    func lengthOfLastWord(_ s: String) -> Int {
        var str1 = s.trimmingCharacters(in: .whitespaces)
        var a = str1.components(separatedBy: " ")
        return a[a.count-1].characters.count
    }
}
