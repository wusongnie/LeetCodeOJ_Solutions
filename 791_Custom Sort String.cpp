class Solution {
public:
    string customSortString(string S, string T) {
        typedef struct comp{
            string S;
            
            comp(string S_in){
                S = S_in;
            }
            bool operator()(const char& a, const char& b){
                size_t loc1 = S.find(a);
                size_t loc2 = S.find(b);
                if(loc1 != string::npos && loc2 != string::npos){
                    return S.find(a) < S.find(b);
                }else if(loc1 != string::npos){
                    return true;
                }else{
                    return false;
                }
                
            }
        }comp;
        
        string res = T;
        sort(res.begin(), res.end(), comp(S));
        return res;
    }
};
