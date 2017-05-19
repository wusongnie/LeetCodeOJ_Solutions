class Solution {
    func addDigits(_ num: Int) -> Int {
        var inte=0
        var num1=num
        while num1>10 {
            inte=inte+num1%10
            num1=num1/10
        }
        if inte>=10{
            return addDigits(inte)
        }
        else{
            return inte
        }
    }
}
