class Solution {
    func findErrorNums(_ nums: [Int]) -> [Int] {
        var dic = [Int:Int]()
        var ans = [0,0]
        for num in nums{
            if dic[num] == nil{
                dic[num] = 1
            }
            else{
                dic[num]! += 1
            }
        }
        for n in 1 ... nums.count{
            if dic[n] == 1{
                continue
            }
            else if dic[n] == nil{
                ans[1] = n
            }
            else if dic[n] == 2{
                ans[0] = n
            }
        }
        return ans
    }
}
