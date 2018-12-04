class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        vector<char> v;
        for(char c:S){
            if(c != '-'){
                if(c >= 'a' && c <='z'){
                    c -= 32;
                    
                }
                v.push_back(c);
            }    
        }
        
        string res = "";
        int r = v.size() % K;
        
        for(int i = 0; i < r; ++i){
            res += v[i];
            if(i == r - 1)
                res += '-';
        }
        
        for(int i = r; i < v.size(); ++i){
            res += v[i];
            if((i - r) % K == K - 1){
                res += '-';
            }
        }
        res.pop_back();
        return res;
    }
};
