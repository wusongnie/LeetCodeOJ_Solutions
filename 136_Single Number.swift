class Solution {
    func singleNumber(_ nums: [Int]) -> Int {
        var dictionary=[Int:Int]()
        for i in nums{
            if dictionary[i]==nil{
                dictionary[i]=1
            }else{
                dictionary[i]=2
            }
            
        }
        for key in dictionary.keys
        {
            if dictionary[key] == 1{
                return key
            }
        }
        return -1
    }
}
