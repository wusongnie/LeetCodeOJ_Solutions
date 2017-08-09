class Solution {
    func minMoves(_ nums: [Int]) -> Int {
        var min = Int.max
        var sum = 0
        for num in nums{
            if num<min {
                min = num
            }
            sum = sum + num
        }
        return (sum - nums.count*min)
        
    }
}
