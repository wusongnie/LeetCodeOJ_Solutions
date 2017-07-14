class Solution {
    func countPrimes(_ n: Int) -> Int {
        var ans = 0
        var flag = false
        if n<=2 {
            return 0
        }
        if n == 3{
            return 1
        }
        if n <= 5 {
            return 2
        }
        for i in 5...n-1{
            flag = true
            for j in 2...(Int)(sqrt((Double)(i))){
                if i % j == 0{
                    flag = false
                    break
                }
            }
            if flag{
                ans += 1
            }
        }
        return ans+2
    }
}

