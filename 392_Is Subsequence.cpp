class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p1 = 0;
        int p2 = 0;
        if(s.size() > t.size()){
            return false;
        }
        while(p1 < s.size() && p2 < t.size()){
            if(s[p1] == t[p2]){
                p1++;
                p2++;
            }
            else{
                p2++;
            }
        }
        return p1 == s.size();
    }
    
};
