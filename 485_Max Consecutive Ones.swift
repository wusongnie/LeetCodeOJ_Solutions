class Solution {
    func findMaxConsecutiveOnes(_ nums: [Int]) -> Int {
        var ans=0
        var temp=0
        for i in nums
        {
            if(i==1)
            {
                temp+=1
                if(temp>ans){
                    ans=temp
                }
            }
            else{
                temp=0
            }
            
        }
        return ans
    }
}
