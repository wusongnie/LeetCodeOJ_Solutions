class Solution {
public:
    int shortestWordDistance(vector<string>& words, string word1, string word2) {
        int res = INT_MAX;
        if(word1 == word2){
            int prev = -1;
            for(int i = 0; i < words.size(); ++i){
                if(words[i] == word1){
                    if(prev != -1){
                        int diff = i - prev;
                        res = res < diff ? res : diff;
                    }
                    prev = i;
                }
            }
            return res;
        }
        vector<int> w1;
        vector<int> w2;
        for(int i = 0; i < words.size(); ++i){
            if(words[i] == word1)
                w1.push_back(i);
            if(words[i] == word2)
                w2.push_back(i);
        }
        
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
