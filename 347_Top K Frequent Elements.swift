class Solution {
    func topKFrequent(_ nums: [Int], _ k: Int) -> [Int] {
        var dic = [Int:Int]()
        for num in nums{
            if dic[num] == nil{
                dic[num] = 1
            }
            else{
                dic[num]! += 1
            }
        }
        var ans = dic.sorted{$0.value>$1.value}
        var res = [Int]()
        var count = k
        for (key,value) in ans{
            res.append(key)
            count -= 1
            if count == 0{
                break
            }
        }
        return res
    }
}
