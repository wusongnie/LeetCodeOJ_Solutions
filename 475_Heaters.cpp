class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(), heaters.end());
        sort(houses.begin(), houses.end());
        int res = -1;
        for(int i = 0; i < houses.size(); ++i){
            int index = lower_bound(heaters.begin(), heaters.end(), houses[i]) - heaters.begin();
            int distL = index - 1 >= 0 ? abs(heaters[index - 1] - houses[i]) : abs(heaters.front() - houses[i]);
            int distR = index < heaters.size() ? abs(heaters[index] - houses[i]) : abs(heaters.back() - houses[i]);
            res = max(res,min(distL, distR));
            
        }
        return res;
    }
};
