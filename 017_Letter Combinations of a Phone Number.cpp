class Solution {
    unordered_map<char, string> map{{'2',"abc"},{'3',"def"},{'4',"ghi"}, {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"}};
    vector<string> result;
    vector<string> updated;
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size() <= 0){
            return result;
        }
        updated.clear();
        if(result.size() == 0){
            for(char c: map[digits[0]]){
                updated.push_back(string(1,c));
            }
        }else{
            for(string s:result){
                for(char c: map[digits[0]]){
                    updated.push_back(s+c);
                }
            }
        }
        
        result = updated;
        letterCombinations(digits.substr(1));
        return result;
    }
};
