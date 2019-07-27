class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.size() == 0){
            return s.size() == 0;
        }
        
        bool firstMatch = (s.size() > 0 && s[0] == p[0] || p[0] == '.');
        if(p.size() >= 2 && p[1] == '*'){
            if (isMatch(s, p.substr(2))){
                return true;
            }
            
            if(s.size() < 1){
                return false;
            }
            
            return firstMatch && isMatch(s.substr(1), p);
            
        }
        if (firstMatch){
            if(s.size() < 1){
                return false;
            }
            return isMatch(s.substr(1), p.substr(1));
        }
         
        return false;
    }
};
