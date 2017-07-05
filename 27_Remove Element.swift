class Solution {
    func removeElement(_ nums: inout [Int], _ val: Int) -> Int {
        var ans = 0
        for i in nums{
            if i != val{
                nums[ans] = i
                ans += 1
            }
        }
        return ans
    }
}
