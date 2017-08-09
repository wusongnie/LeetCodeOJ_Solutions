class Solution {
    func canConstruct(_ ransomNote: String, _ magazine: String) -> Bool {
        var dic1 = [Character:Int]()
        var dic2 = [Character:Int]()
        for c in ransomNote.characters{
            if dic1[c] == nil{
                dic1[c] = 1
            }else{
                dic1[c]! += 1
            }
        }
        for c in magazine.characters{
            if dic2[c] == nil{
                dic2[c] = 1
            }else{
                dic2[c]! += 1
            }
        }
        for (key,value) in dic1{
            if dic2[key] == nil || dic2[key]! < value {
                return false
            }
        }
        return true
    }
}
