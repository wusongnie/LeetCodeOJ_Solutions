class ValidWordAbbr {
public:
    unordered_map<string, unordered_set<string>> map;
    ValidWordAbbr(vector<string>& dictionary) {
        for(string s : dictionary){
            string abbr = convert(s);
            if(map.find(abbr) == map.end()){
                unordered_set<string> temp;
                temp.insert(s);
                map[abbr] = temp;
            }else{
                map[abbr].insert(s);
            }
        }
    }
    
    string convert(string s){
        if(s.size() <= 2)
            return s;
        else
            return s[0] + to_string(s.size() - 2) + s[s.size() - 1];
    }
    bool isUnique(string word) {
        string abbr = convert(word);
        return map.find(abbr) == map.end() || (map[abbr].size() == 1 && map[abbr].find(word) != map[abbr].end());
    }
};

/**
 * Your ValidWordAbbr object will be instantiated and called as such:
 * ValidWordAbbr* obj = new ValidWordAbbr(dictionary);
 * bool param_1 = obj->isUnique(word);
 */
