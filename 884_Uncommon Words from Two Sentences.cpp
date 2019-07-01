class Solution {
public:
    vector<string> split(string &s, char delim) {
        stringstream ss(s);
        string item;  
        vector<string> v; 
        while (getline(ss, item, delim)) {
            v.push_back(item);
        }
        return v;
    }
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> x = split(A, ' ');
        vector<string> y = split(B, ' ');
        unordered_map<string, int> map;
        for(string s : x){
            if(map.find(s) == map.end()){
                map[s] = 1;
            }else{
                map[s] += 1;
            }
            
        }
        for(string s : y){
            if(map.find(s) == map.end()){
                map[s] = 1;
            }else{
                map[s] += 1;
            }
        }
        vector<string> res;
        for(auto i : map){
            if(i.second == 1){
                res.push_back(i.first);
            }
        }
        return res;
    }
};
