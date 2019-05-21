class Solution {
public:
    bool canPermutePalindrome(string s) {
        unordered_map<char,int> map;
        for(char c : s){
            if(map.find(c) == map.end()){
                map[c] = 1;
            }else{
                map[c]++;
            }
        }
        int count = 0;
        for(auto i : map){
            if(i.second % 2 == 1)
                count++;
            if(count > 1)
                return false;
        }
        return true;
    }
};
