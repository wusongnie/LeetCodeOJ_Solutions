class Solution {
    func findDisappearedNumbers(_ nums: [Int]) -> [Int] {
        var list = [Int]()
        if nums.isEmpty
        {
            return list
        }
        var max = 1
        var dic = Dictionary<Int,Int>()
        for num in nums{
            dic[num] = 1
        }
        for key in 1...nums.count{
            if dic[key] == nil
            {
                list.append(key)
            }
        }
        return list
    }
    
}
