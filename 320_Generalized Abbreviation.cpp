class Solution {
public:
    vector<string> generateAbbreviations(string word) {
        vector<string> res;
        helper(res, "", word, 0 ,0);
        return res;
    }
    void helper(vector<string>& res, string curr, string word, int i, int j){
        string temp = curr;
        if(i == word.size()){
            if(j > 0){
                curr += to_string(j);
            }
            res.push_back(curr);
        }else{
            helper(res, curr, word, i + 1, j + 1);
            if(j > 0){
                curr += to_string(j);
            }
            curr += word[i];
            helper(res, curr, word, i + 1, 0);
        }
        curr = temp;
    }
};
