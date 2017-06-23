class Solution {
    func findWords(_ words: [String]) -> [String] {
        let firstRow = ["q", "w", "e", "r", "t", "y", "u", "i", "o", "p"]
        let secondRow = ["a", "s", "d", "f", "g", "h", "j", "k", "l"]
        let thirdRow = ["z", "x", "c", "v", "b", "n", "m"]
        var result = [String]()
        var currentRow=0;
        var prevRow=0
        var flag=false
        for word in words{
            var letters = word.lowercased().characters
            prevRow=0
            for letter in letters
            {
                if (firstRow.contains(String(letter))){
                    currentRow=1
                }
                else if (secondRow.contains(String(letter))){
                    currentRow=2
                }
                else if (thirdRow.contains(String(letter))){
                    currentRow=3
                }
                
                if(prevRow==0){
                    prevRow=currentRow
                }
                
                if(prevRow != currentRow)
                {
                    flag=false
                    break
                }
                else{
                    prevRow=currentRow
                }
                flag=true
                
            }
            if(flag){
                result.append(word)
            }
            
        }
        return result
    }
}
