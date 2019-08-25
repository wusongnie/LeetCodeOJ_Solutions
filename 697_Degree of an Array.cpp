class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> left;
        unordered_map<int, int> right;
        unordered_map<int, int> count;
        
        for(int i = 0; i < nums.size(); ++i){
            int x = nums[i];
            if(left.find(x) == left.end()){
                left[x] = i;
            }
            
            right[x] = i;
            count[x] = count.find(x) == count.end() ? 0 : count[x] + 1;
        }
        
        int ans = nums.size();
        
        vector<int> values;
        for(auto i : count){
            values.push_back(i.second);
        }
        int degree = *max_element(values.begin(), values.end());
        
        for(auto i : count){
            if(count[i.first] == degree){
                ans = min(ans, right[i.first] - left[i.first] + 1);
            }
        }
        
        return ans;
    }
};
