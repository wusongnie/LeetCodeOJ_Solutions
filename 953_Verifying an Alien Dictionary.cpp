class Solution {
public:
    
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> v = vector<int>(26,0);
        for(int i = 0; i < order.size(); ++i){
            v[order[i] - 'a'] = i;
        }
        class Comp{
            public :
            vector<int> v;
            Comp(vector<int> vIn){
                v = vIn;
            }
            bool operator()(const string& w1, const string& w2, vector<int>& v){
                int s = w1.size();
                if(s > w2.size()){
                    s = w2.size();
                }
                for(int i = 0; i < s; ++i){
                    if(v[w1[i] - 'a'] == v[w2[i] - 'a']){
                        continue;
                    }
                    else{
                        return v[w1[i] - 'a'] < v[w2[i] - 'a'];
                    }
                }
                return w1.size() < w2.size();
            }
        };
        
        Comp comp = Comp(v);
        for(int i = 0; i < words.size() - 1; ++i){
            if(comp(words[i], words[i + 1], v)){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};
