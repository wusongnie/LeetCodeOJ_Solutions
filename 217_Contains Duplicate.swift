class Solution {
    func containsDuplicate(_ nums: [Int]) -> Bool {
        var distinctSet = Set<Int>()
        for i in nums{
            if(!distinctSet.contains(i)){
                distinctSet.insert(i)
            }
            else {
            return true
            }
        }
        return false
    }
}
