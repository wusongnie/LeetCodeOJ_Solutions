class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        if(s.size() <= 0)
            return false;
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;
        for(int i = 0; i <= s.size(); ++i){
            for(int j = i - 1; j >= 0; --j){
                if(dp[j]){
                    string temp = s.substr(j, i - j);
                    if(find(wordDict.begin(), wordDict.end(), temp) != wordDict.end()){
                        dp[i] = true;
                        break;
                    }
                }
                
                
            }
        }
        return dp[s.size()];
    }
};
