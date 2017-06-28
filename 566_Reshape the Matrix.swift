class Solution {
    func matrixReshape(_ nums: [[Int]], _ r: Int, _ c: Int) -> [[Int]] 
    {
        if nums.count*nums[0].count != r*c
        {
            return nums
        }
        var array1 = [Int]()
        for i in 0...(nums.count-1){
            for j in 0...(nums[0].count-1){
                array1.append(nums[i][j])
            }
        }
        var k = 0 
        var array2 = [[Int]]()
        for i in 0...(r-1){
        array2.append([Int]())
            for j in 0...(c-1){
                array2[i].append(array1[k])
                k = k + 1 
            }
        }
        return array2
        
    }   
}
