class Solution {
    func searchInsert(_ nums: [Int], _ target: Int) -> Int {
        for i in 0...nums.count-1{
            if nums[i] >= target{
                return i
            }
            
        }
        return nums.count
    }
}
