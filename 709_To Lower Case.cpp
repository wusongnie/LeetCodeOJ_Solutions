class Solution {
public:
    string toLowerCase(string str) {
        string res = "";
        for(char s:str){
            if(s >= 'A' && s <='Z')
                s += 32;
            res += s;
        }
        return res;
    }
};
