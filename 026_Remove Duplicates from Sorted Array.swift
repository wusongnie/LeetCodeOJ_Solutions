class Solution {
    func removeDuplicates(_ nums: inout [Int]) -> Int {
        if nums.count == 0{
            return 0
        }
        var current = Int.max
        var ans = 0
        var tracker = 0
        for i in 0 ... nums.count - 1{
            if nums[i] == current{
                continue
            }else{
                current = nums[i]
                ans = ans + 1
                nums[ans-1]=nums[i]
            }      
        }
        return ans     
    }
}
