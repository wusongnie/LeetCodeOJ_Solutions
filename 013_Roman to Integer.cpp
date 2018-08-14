class Solution {
public:
    int romanToInt(string s) {
        map<char,int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        
        if(s.length() == 0) return 0;
        int ans = map[s[s.length() - 1]];
        if(s.length() == 1) return ans;
        for(int i = s.length() - 2; i >= 0; --i){
            if(map[s[i]] == map[s[i + 1]]){
                ans += map[s[i]];
            }else if(map[s[i]] > map[s[i + 1]]){
                ans += map[s[i]];
            }else{
                ans -= map[s[i]];
            }
        }
        return ans;
        
    }
};
