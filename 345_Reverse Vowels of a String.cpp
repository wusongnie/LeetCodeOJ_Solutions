class Solution {
public:
    string reverseVowels(string s) {
        int l = 0; 
        int r = s.size() - 1;
        while(l < r){
            if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u' || s[l] == 'A' || s[l] == 'E' || s[l] == 'I' || s[l] == 'O' || s[l] == 'U'){
                if(s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u' || s[r] == 'A' || s[r] == 'E' || s[r] == 'I' || s[r] == 'O' || s[r] == 'U' ){
                    char temp = s[l];
                    s[l] = s[r];
                    s[r] = temp;
                    l++;
                    r--;
                }else{
                    r--;
                }
            }else{
                l++;
            }
        }
        return s;
    }
};
