class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map1;
        unordered_map<int, int> map2;
        unordered_map<int, int> map3;
        vector<int> res;
        for(int i : nums1){
            map1[i] = 1;
        }
        
        for(int i : nums2){
            map2[i] = 1;
        }
        
        for(auto i : map1){
            if(map3.find(i.first) == map3.end()){
                map3[i.first] = 1;
            }else{
                map3[i.first]++;
            }
        }
        
        for(auto i : map2){
            if(map3.find(i.first) == map3.end()){
                map3[i.first] = 1;
            }else{
                map3[i.first]++;
            }
        }
        
        for(auto i : map3){
            if(i.second > 1){
                res.push_back(i.first);
            }
        }
        
        return res;  
    }
};
