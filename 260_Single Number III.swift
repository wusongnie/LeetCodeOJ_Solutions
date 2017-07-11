class Solution {
    func singleNumber(_ nums: [Int]) -> [Int] {
        var k = 0
        var dic = [Int: Int]()
        var ans = [Int]()
        for num in nums{
            if dic[num] != nil{
                dic[num] = 1 + dic[num]!
            }else{
                dic[num] = 1
            }
        }
        for (key,value) in dic{
            if value == 2{
                continue
            }
            else
            {
                ans.append(key)
                k = k + 1
                if k == 2{
                    break
                }
            }
        }
        return ans
    }
}
