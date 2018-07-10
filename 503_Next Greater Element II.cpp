class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> v;
        for(int n:nums){
            v.push_back(n);
        }
        for(int n:nums){
            v.push_back(n);
        }
        vector<int> res;
        bool found = false;
        for(int i = 0; i < nums.size();++i){
            found = false;
            for(int j = i; j < v.size(); ++j){
                if(nums[i] < v[j]){
                    res.push_back(v[j]);
                    found = true;
                    break;
                }
            }
            if(found) 
                continue;
            else
                res.push_back(-1);
        }
        
        
        return res;
    }
};
