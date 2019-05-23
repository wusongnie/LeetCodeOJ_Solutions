class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        vector<int> w1;
        vector<int> w2;
        for(int i = 0; i < words.size(); ++i){
            if(words[i] == word1)
                w1.push_back(i);
            if(words[i] == word2)
                w2.push_back(i);
        }
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
