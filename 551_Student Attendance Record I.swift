class Solution {
    func checkRecord(_ s: String) -> Bool {
        var a = 0
        var l = 0
        for c in s.characters{
            if c == "P"{
                l = 0
                continue
            }
            if c == "A"{
                a += 1
                l = 0
            }
            if c == "L"{
                l += 1
                
            }
            if l == 3{
                return false
            }
        }
        if(a<2){
            return true
        }
        return false
    }
}
