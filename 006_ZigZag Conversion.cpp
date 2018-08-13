class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)return s;
        string ans = "";
        int p = numRows * 2 - 2;
        for(int i = 0; i < numRows; ++i){
            for(int j = 0; j < s.length(); ++j){
                if(j % p == i || j % p == p - i ) ans += s[j];
            }
        }
        
        return ans;
    }
};
