class Solution {
    func getHint(_ secret: String, _ guess: String) -> String {
        var dic = [Character:Int]()
        var dic1 = [Character:Int]()
        var dic2 = [Int:Character]()
        var A = 0
        var B = 0
        var i = 0
        for char in secret.characters{
            if dic[char] == nil{
                dic[char] = 1
            }else
            {
                dic[char]! += 1
            }
            dic2[i] = char
            i += 1
        }
        for char in guess.characters{
            if dic1[char] == nil{
                dic1[char] = 1
            }else
            {
                dic1[char]! += 1
            }
        }
        
        i = 0
        for char in guess.characters{
            if char == dic2[i]
            {
                A += 1
            }
            i += 1
        }
        
        for key in dic1.keys{
            if dic[key] != nil{
                if dic[key]! > dic1[key]!{
                    B += dic1[key]!
                }else{
                    B += dic[key]!
                }
            }
        }
        return "\(A)A\(B-A)B"
    }
}
