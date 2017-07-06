class Solution {
    func compareVersion(_ version1: String, _ version2: String) -> Int {
        var a = version1.components(separatedBy:".")
        var b = version2.components(separatedBy:".")
        var k = 0;
        if(a.count<b.count)
        {
            k = b.count
            for i in 0...(k - a.count - 1) {
                a.append("0")
            }
        }
        else if(a.count>b.count){
            k = a.count
            for i in 0...(k - b.count - 1) {
                b.append("0")
            }
        }
        else{
            k = a.count
        }
        for i in 0...(k-1){
            if compareS(a[i], b[i]) == 0
            {
                continue
            }
            else{
                return compareS(a[i], b[i])
            }
        }
        
        return 0
    }
    func compareS(_ str1 : String, _ str2 : String)->Int
    {
        let k1 = NSString(string:str1)
        let k2 = NSString(string:str2)
        if k1.intValue<k2.intValue{
            return -1
        }
        if k1.intValue>k2.intValue{
            return 1
        }
        return 0
    }
}
