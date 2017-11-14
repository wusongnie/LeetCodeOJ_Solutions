class Solution {
    func findComplement(_ num: Int) -> Int {
        var n = num
        var k = ""
        while n != 0 {
            k = k + String(n % 2)
            n = n/2
        }
        k = String(k.characters.reversed())
        var result = ""
        for c in k.characters {
            if c == "1" {
                result += "0"
            }else{
                result += "1"
            }
        }
        return Int(result, radix: 2)!
    }
}
