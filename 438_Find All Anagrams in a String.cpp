class Solution {
public:
    bool areSame(int *a, int *b){
        for(int i = 0; i < 26; i++)
            if(a[i] != b[i]) return false;
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
        vector<int> output;
        if(s.length() == 0 or s.length() < p.length()) return output;
        int m = p.size();
        int n = s.size();
        int text[26] = {0}, pattern[26] = {0};
        for(int i=0; i<m; i++){
            text[s[i] - 'a']++;
            pattern[p[i] - 'a']++;
        }
        for(int i=m; i<n; i++){
            if(areSame(text, pattern)) output.push_back(i - m);
            text[s[i] - 'a']++;
            text[s[i-m]-'a']--;
        }
        if(areSame(text, pattern)) output.push_back(n-m);
        return output;
    }
    
};
