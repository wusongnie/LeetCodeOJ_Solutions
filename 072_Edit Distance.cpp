class Solution {
public:
    vector<vector<int>> table;
    int minDistance(string word1, string word2) {
        int i = word1.size();
        int j = word2.size();
        table = vector<vector<int>>(i + 1, vector<int>(j + 1, -1));
        return helper(word1, word2, i, j);
    }
    int helper(const string& word1, const string& word2, int i, int j){
        if(i == 0)
            return j;
        if(j == 0)
            return i;
        if(table[i][j] >= 0)
            return table[i][j];
        
        int ans = -1;
        
        if(word1[i - 1] == word2[j - 1]){
            ans = helper(word1, word2, i - 1, j - 1);
        }else{
            ans = min(min(helper(word1, word2, i - 1, j - 1),
                          helper(word1, word2, i - 1, j)), 
                          helper(word1, word2, i, j - 1)) + 1;
        }
        
        table[i][j] = ans;
        return ans;
        
    }
};
