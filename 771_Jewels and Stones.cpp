class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int res = 0;
        unordered_map<char,int>map;
        for(int i = 0; i < J.size(); ++i){
            map[J[i]] = 1;
        }
        for(int j = 0; j < S.size(); ++j){
            if(map.find(S[j]) != map.end())
                res++;
        }
        return res;
    }
};
