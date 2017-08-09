class Solution {
    func constructRectangle(_ area: Int) -> [Int] {
        var ans = [0,0]
        
        for i in stride(from: (Int)(sqrt(Double(area))) , through: 1, by: -1) {
            if area % i == 0{
                ans[1] = i
                break
            }
        }
        ans[0] = area/ans[1]
        return ans
    }
}
