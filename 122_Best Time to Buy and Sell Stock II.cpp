class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1)
            return 0;
        int ans = 0;
        int curr_buy = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(curr_buy < prices[i]){
                ans += prices[i] - curr_buy;
                
            }
            curr_buy = prices[i];
        }
        return ans;
    }
};
