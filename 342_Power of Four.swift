class Solution {
    func isPowerOfFour(_ num: Int) -> Bool {
        if(num<1)
        {
            return false
        }
        let k = Double(num)
        if (log(k) / log(2)) - trunc((log(k) / log(2))) == 0 && Int(trunc((log(k) / log(2)))) % 2 == 0 
        {
            return true
        }
        
        return false
    }
}
