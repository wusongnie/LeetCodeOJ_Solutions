class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int j = 0;
        int la = a.length();
        int lb = b.length();
        int l = max(la,lb);
        
        for(int i = 1; i <= l; ++i){
            int result = 0;
            if(la - i < 0)
                result = b[b.length() - i] - 48 + j;
            else if(lb - i < 0)
                result = a[a.length() - i] - 48 + j;
            else
                result = a[a.length() - i] + b[b.length() - i] + j - 48 - 48;
            
            if(result >= 2){
                result = result % 2;
                j = 1;
            }else
                j = 0;
            
            ans = to_string(result) + ans;
        }
        if(j == 1)
            ans = to_string(1) + ans;
        return ans;
    }
};
