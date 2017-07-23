class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        var dic = [Int:Int]()
        for i in 0...nums.count-1{
               dic[nums[i]] = i
        }
        var ans = [Int]()
        for i in 0...nums.count - 1{
            if (dic[target-nums[i]] != nil && dic[target-nums[i]] != i){
                ans.append (i)
                ans.append (dic[target-nums[i]]!)
                break
            }
        }
        return ans
    }
}
