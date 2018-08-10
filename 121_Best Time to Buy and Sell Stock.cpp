class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int min = INT_MAX;
        for(int i:prices){
            if(i < min)
                min = i;
            if(i - min > ans)
                ans = i - min;
        }
        return ans;
    }
};
