class WordDistance {
public:
    unordered_map<string, vector<int>> dict;
    WordDistance(vector<string>& words) {
        for(int i = 0; i < words.size(); ++i){
            vector<int> temp;
            temp.push_back(i);
            if(dict.find(words[i]) != dict.end()){
                dict[words[i]].push_back(i);
            }else{
                dict[words[i]] = temp;
            }
        }
    }
    
    int shortest(string word1, string word2) {
        vector<int> w1 = dict[word1];
        vector<int> w2 = dict[word2];
        int res = INT_MAX;
        int i = 0;
        int j = 0;
        while(i < w1.size() && j < w2.size()){
            int diff = abs(w1[i] - w2[j]);
            res = res < diff ? res : diff;
            if(i == w1.size() - 1) 
                j++;
            else if(j == w2.size() - 1) 
                i++;
            else if(w1[i] < w2[j])
                 i++;
            else j++;
        }
        return res;
    }
};

/**
 * Your WordDistance object will be instantiated and called as such:
 * WordDistance* obj = new WordDistance(words);
 * int param_1 = obj->shortest(word1,word2);
 */
