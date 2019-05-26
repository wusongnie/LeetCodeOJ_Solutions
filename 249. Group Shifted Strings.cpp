class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        vector<vector<string>> res;
	    unordered_map<string, int> map;
        for (string str : strings) {
		    string s = "";
            // form a new string mapper
		    for (char c : str) 
			    s.push_back((c - str[0] + 26) % 26 + 'a');
		    if (map.count(s) == 0) {
			    map[s] = res.size();
			    res.push_back({str});
		    } 
		    else {
			    res[map[s]].push_back(str);
		    }
        }
        return res;
    }
        
    
};
