class Solution {
    func majorityElement(_ nums: [Int]) -> Int {
        var dic = [Int : Int]()
        for i in nums{
            if(dic[i]==nil){
                dic[i]=1
            }
            else{
                dic[i] = dic[i]! + 1
            }
        }
        for (key,value) in dic{
            if value>=nums.count/2+1{
                return key
            }
        }
        return 0
    }
}
