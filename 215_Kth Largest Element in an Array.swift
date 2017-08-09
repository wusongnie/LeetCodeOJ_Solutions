class Solution {
    func findKthLargest(_ nums: [Int], _ k: Int) -> Int {
        var ans = nums.sorted{$0 > $1}
        return ans[k-1]
    }
}
