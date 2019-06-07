class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int head = 0;
        for(int i = 0; i < nums.size(); i++){
            while(i + 1 < nums.size() && nums[i] + 1 == nums[i + 1]){
                i++;
            }
            string curr = "";
            if(head == i){
                curr += to_string(nums[i]);
            } else {
                curr += to_string(nums[head]) + "->" + to_string(nums[i]);
            }
            res.push_back(curr);
            head = i + 1;
        }
        return res;
    }
};
