class Solution {
public:
    int totalFruit(vector<int>& tree) {
        int start = 0;
        int n = tree.size();
        int maxLength = 0;
        
        unordered_map<int,int> map;
        for (int end = 0; end < n; end++) {
            map[tree[end]] = end;
            if (map.size() > 2) {
                int minIndex = INT_MAX;
                for(auto k : map){
                    if(minIndex > k.second)
                        minIndex = k.second;
                }
                map.erase(tree[minIndex]);
                start = minIndex + 1;
            }
            maxLength = max(maxLength, end - start + 1);
        }
    
        return maxLength;
    }
};
