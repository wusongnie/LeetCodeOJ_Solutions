class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> dic;
        for(int i = 0; i < numbers.size(); ++i){
               dic[numbers[i]] = i;
        }
        vector<int>ans;
        for(int i = 0; i < numbers.size(); ++i){
            if (dic[target-numbers[i]] != NULL && dic[target-numbers[i]] != i){
                ans.push_back(i + 1);
                ans.push_back(dic[target-numbers[i]] + 1);
                break;
            }
        }
        return ans;
    }
};
