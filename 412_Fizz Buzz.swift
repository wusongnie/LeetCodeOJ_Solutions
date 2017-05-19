class Solution {
    func fizzBuzz(_ n: Int) -> [String] {
        var k=[String]()
        for index in 1...n {
            if(index%3==0&&index%5 != 0){
                k.append("Fizz")
            }
            else if(index%3 != 0&&index%5==0){
                k.append("Buzz")
            }
            else if(index%3==0&&index%5==0){
                k.append("FizzBuzz")
            }
            else{
                k.append("\(index)")
            }
            
        }
        return k
    }
}
