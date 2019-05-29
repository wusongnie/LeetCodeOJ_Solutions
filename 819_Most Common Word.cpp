class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> map;
        string tok = "";
        vector<string> v;
        for(char& c : paragraph){
            if(!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))){
                c = ' ';
            }
        }
        istringstream iss (paragraph);
        while(iss >> tok){
            string temp; 
            bool flag = false;
            for(int i = 0; i < tok.size(); ++i){
                if(tok[i] >= 'A' && tok[i] <= 'Z'){
                    temp += tok[i] + 32;
                }
                else if(tok[i] >= 'a' && tok[i] <= 'z'){
                    temp += tok[i];
                }
            }
            v.push_back(temp);
        }
        
        for(auto s : v){
            if(map.find(s) == map.end()){
                map[s] = 1;
            }else{
                map[s]++;
            }
        }
        
        for(auto s : banned){
            map[s] = -1;
        }
        
        int count = INT_MIN;
        string ans = "";
        for(auto i : map){
            if(i.second > count){
                count = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};
