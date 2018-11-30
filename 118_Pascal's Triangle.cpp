class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows <= 0)
            return res;
        vector<int> curr;
        curr.push_back(1);
        res.push_back(curr);
        if(numRows == 1)return res;
        
        for(int j = 1; j < numRows; ++j){
            vector<int> k;
            k.resize(curr.size() + 1);
            for(int i = 0; i < curr.size(); i++){
                k[i] += curr[i];
                k[i + 1] += curr[i];
            }
            res.push_back(k);
            curr = k;
            
        }
        return res;
    }
};
