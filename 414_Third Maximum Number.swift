class Solution {
    func thirdMax(_ nums: [Int]) -> Int {
        var dic = [Int:Int]()
        for n in nums{
            dic[n] = 1`  
        }
        var max = Int.min
        if dic.keys.count < 3 {
            for key in dic.keys{
                if max < key {
                    max = key
                }
            }
            return max
        }
        var maxs = [Int.min,Int.min,Int.min]
        for n in dic.keys{
            if n > maxs[0] {
                maxs[2] = maxs[1]
                maxs[1] = maxs[0]
                maxs[0] = n
            } else if n > maxs[1] {
                maxs[2] = maxs[1]
                maxs[1] = n
            } else if n > maxs[2]{ 
                maxs[2] = n
            } 
        }
        
        return maxs[2]
    }
    
}
