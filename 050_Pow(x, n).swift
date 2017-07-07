class Solution {
    func myPow(_ x: Double, _ n: Int) -> Double {
        var m = n
        var temp = x
        if(m == 0){
            return 1
        }
        
        temp=myPow(x, m / 2)
        
        if(m%2 == 0){
            return temp*temp
        }
        else
        {
            return m>0 ? temp*temp*x : (temp*temp)/x
        }
        
    }
}
