class Solution {
    func missingNumber(_ nums: [Int]) -> Int {
        var dic = [Int:Int]()
        for num in nums{
            dic[num] = 1
        }
        for i in 0...dic.count{
            if dic[i] == nil
            {
                return i
            }
        }
        return dic.count
    }
}
