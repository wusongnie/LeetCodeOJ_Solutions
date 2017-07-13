class Solution {
    func strStr(_ haystack: String, _ needle: String) -> Int {
        let a=NSString(string:haystack)
        if(needle == ""){
            return 0
        }
        if(haystack.contains(needle)){
            return a.range(of: needle, options: NSString.CompareOptions.caseInsensitive).location
        }
        else{
            return -1
        }
        
    }
}
