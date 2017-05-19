class Solution {
    func distributeCandies(_ candies: [Int]) -> Int {
        var candiess=candies.sorted(by: >)
        var total=0
        var current=0
        
        if(candiess[0] == 0){
            total = 1
        }
        for numbers in candiess{
            if(numbers != current){
                total+=1
            }
            current=numbers
        }
        return min(total,candies.count/2)
    }
}
