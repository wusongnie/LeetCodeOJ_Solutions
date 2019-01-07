class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> map;
        int c = 0;
        for(int i:B){
            map[i] = c++;
        }
        vector<int> res(c,0);
        c = 0;
        for(int i:A){
            res[c++] = map[i];
        }
        return res;
    }
};
