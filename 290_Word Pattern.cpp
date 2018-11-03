class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char,string> c2s;
        map<string,char> s2c;
        
        stringstream ssin(str);
        vector<string> strs;
        string temp;
        while(ssin >> temp)
            strs.push_back(temp);
        if(pattern.size() != strs.size())
            return false;
        
        for(int i = 0; i < pattern.size(); i++){
            if(c2s.find(pattern[i]) == c2s.end()){
                c2s[pattern[i]] = strs[i];
                if(s2c.find(strs[i]) == s2c.end()){
                    s2c[strs[i]] = pattern[i];
                }else return false;
            }else if(c2s[pattern[i]] != strs[i])
                return false;
        }
        return true;
    }
};
