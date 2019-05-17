class Solution {
public:
    bool isChange(string& from, string& to){
        if(from.length() != to.length())
            return false;
        int diff = 0;
        for(int i = 0; i < from.length(); ++i){
            if(from[i] != to[i])
                diff++;
        }
        return diff == 1;
    }
    bool isInsert(string& from, string& to){
        if(from.length() != to.length() + 1)
            return false;
        bool done = false;
        int l = 0;
        int r = 0;
        while(l < from.length()){
            if(from[l] != to[r]){
                if(done){
                    return false;
                }
                done = true;
                l++;
            }else{
                l++;
                r++;
            }
        }
        return true;
    }
    bool isDelete(string& from, string& to){
        return isInsert(to,from);
    }
    bool isOneEditDistance(string s, string t) {
        return isChange(s,t) || isInsert(s,t) || isDelete(s,t);
    }
};
