class Solution {
public:
    vector<int> splitIntoFibonacci(string S) {
        vector<int> res;
        helper(S, res, 0);
        return res;
    }
    
    bool helper(string& S, vector<int>& res, int j){
        if(j >= S.size() && res.size() >= 3)
            return true;
        int maxSplitSize = (S[j] == '0') ? 1 : 10;
        for(int i = 1; i <= maxSplitSize && i + j <= S.size(); ++i){
            long long num = stoll(S.substr(j, i));
            if(num > INT_MAX)
                continue;
            int sz = res.size();
                
            if (sz >= 2 && (long long)res[sz - 1] + (long long)res[sz - 2] != num)
                continue;
            
            if(sz <= 1 || res[sz - 1] + res[sz - 2] == num){
                res.push_back(num);
                if(helper(S, res, i + j))
                    return true;
                res.pop_back();                
            }
            
        }
        return false;
    }
};
