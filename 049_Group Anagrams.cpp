class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> groups;
        int i = 0;
        for(auto& word: strs){
            string str = word;
            sort(str.begin(), str.end());
            groups[str].push_back(word);
        }
        for(auto& bucket: groups){
            res.push_back(bucket.second);
        }
        return res;
    }
};
