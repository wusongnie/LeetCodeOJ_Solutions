class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(g.size() <= 0)
            return g.size();
        if(s.size() <= 0)
            return s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int j = 0;
        int res = 0;
        for(int i = 0; i < g.size() && j < s.size();){
            if(g[i] <= s[j]){
                res++;
                j++;
                i++;
            }else{
                j++;
            }
        }
        return res;
    }
};
