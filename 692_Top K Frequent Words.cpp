class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mapOfWordCount;
        for(auto& s : words){
            if(mapOfWordCount.find(s) == mapOfWordCount.end()){
                mapOfWordCount[s] = 1;
            }else{
                mapOfWordCount[s]++;
            }
        }
        typedef std::function<bool(pair<string, int>, pair<string, int>)> Comparator;
        Comparator compFunctor = [](pair<string, int> elem1, pair<string, int> elem2){
            if(elem1.second > elem2.second)
                return true;
            if(elem1.second < elem2.second)
                return false;
            
            return elem1.first < elem2.first;
            
        };
        vector<pair<string, int>> setOfWords(
			mapOfWordCount.begin(), mapOfWordCount.end());
        sort(setOfWords.begin(), setOfWords.end(), compFunctor);
        vector<string> res;
        for(int i = 0; i < k; ++i){
            res.push_back(setOfWords[i].first);
        }
        return res;
    }
};
