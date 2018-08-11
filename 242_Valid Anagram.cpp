class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> map1;
        map<char,int> map2;
        for(char c: s){
            if(map1[c] != NULL)
            {
                map1[c] += 1;
            }else{
                map1[c] = 1;
            }     
        }
        for(char c: t){
            if(map2[c] != NULL)
            {
                map2[c] += 1;
            }else{
                map2[c] = 1;
            }     
        }        
        string check = s;
        if(s.length() < t.length()){
            check = t;
        }        
        for(char c: check){
            if(map1[c] != map2[c])
            {
                return false;
            }
        }
        return true;
    }
    
};
