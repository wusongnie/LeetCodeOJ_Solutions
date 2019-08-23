class Solution {
public:
    bool backspaceCompare(string S, string T) {
        return convert(S) == convert(T);
    }
    
    string convert(string s){
        stack<char> ans;
        string ret = "";
        for(char c : s){
            if(c != '#'){
                ans.push(c);
            }
            else if(!ans.empty()){
                ans.pop();
            }
        }
        
        while(!ans.empty()){
            ret += ans.top();
            ans.pop();
        }
        
        return ret;
    }
};
