class Solution {
    func convertToBase7(_ num: Int) -> String {
        var k = num
        var s = ""
        var flag = ""
        if num<0
        {
            flag = "-"
            k = -k
        }
        else
        {
            flag = ""
        }
        while k != 0{
            s = "\(k % 7)"+s
            k = k / 7
        }
        let str = NSString(string:s)
        
        return flag+"\(str.intValue)"
    }
}
