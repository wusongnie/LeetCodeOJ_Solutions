class Solution {
    func majorityElement(_ nums: [Int]) -> [Int] {
        var dic = [Int:Int]()
        var ans = [Int]()
        let c = nums.count
        for num in nums{
            if dic[num] == nil{
                dic[num] = 1
            }
            else{
                dic[num]! += 1
            }
        }
        for (key,value) in dic{
            if value > c/3{
                ans.append(key)
            }
        }
        return ans
    }
}
