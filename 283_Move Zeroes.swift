class Solution {
    func moveZeroes(_ nums: inout [Int]) {
        var zero = 0
        var temp = false
        for i in 0...nums.count-1{
            if nums[i] == 0{
                temp = true
            }
            else
            {
                if temp{
                nums[zero] = nums[i]
                nums[i] = 0
                }
                zero = zero + 1
            }  
        }
    }
}
