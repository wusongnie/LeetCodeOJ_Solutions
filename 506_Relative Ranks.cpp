class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> relativeRanks(nums.size(), "");
        map<int, int, greater <int>> numToIndexMap;
        for (int i=0; i<nums.size(); i++)
            numToIndexMap[nums[i]] = i;
        
        int count = 0;
        for (const auto& elem: numToIndexMap) {
            relativeRanks[elem.second] = (count == 0) ? "Gold Medal" : ((count == 1) ? "Silver Medal" :
                                         ((count == 2) ? "Bronze Medal" : to_string(count+1)));
            ++count;
        }
        return relativeRanks;
    }
};
