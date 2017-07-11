class Solution {
    func singleNumber(_ nums: [Int]) -> Int {
        var dic = [Int: Int]()
        for num in nums{
            if dic[num] != nil{
                dic[num] = 1 + dic[num]!
            }else{
                dic[num] = 1
            }
        }
        for (key,value) in dic{
            if value == 3{
                continue
            }
            else{
                return key
            }
        }
        return 0
    }
}
