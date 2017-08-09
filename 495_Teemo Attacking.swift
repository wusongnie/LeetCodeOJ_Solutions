class Solution {
    func findPoisonedDuration(_ timeSeries: [Int], _ duration: Int) -> Int {
        var ans = 0
        if timeSeries.count == 0{
            return 0
        }
        if timeSeries.count == 1{
            return duration
        }
        for i in 0...timeSeries.count-2{
            if timeSeries[i] + duration <= timeSeries[i+1] {
                ans += duration
            }else{
                ans += timeSeries[i+1] - timeSeries[i]
            }
        }
        return ans + duration
    }
}
