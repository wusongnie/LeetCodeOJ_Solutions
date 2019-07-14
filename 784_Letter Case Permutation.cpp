class Solution {
public:
    
    vector<string> letterCasePermutation(string S) {
        vector<string> v;
        helper(S, 0, v);
        return v;
    }
    
    void helper(string S, int curr, vector<string>& v){
        v.push_back(S);
        if(curr >= S.size()){
            return;
        }
        
        for(int i = curr; i < S.size(); ++i){
            if(S[i] != change(S[i])){
                S[i] ^= 32;
                helper(S, i + 1, v);
                S[i] ^= 32;
            }
        }
        
    }
    
    char change(char c){
        if(c >= 'a' && c <= 'z'){
            return c - 32;
        }
        
        if(c >= 'A' && c <= 'Z'){
            return c + 32;
        }
        
        return c;
    }
};
