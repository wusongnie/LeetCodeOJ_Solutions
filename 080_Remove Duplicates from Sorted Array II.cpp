class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int curr = 0;
        int currNum = -1;
        
        for(int i = 0; i < nums.size(); ++i){
            if(currNum == nums[i]){
                count++;
                if(count < 3){
                    nums[curr++] = nums[i];
                }
            }else{
                count = 1;
                nums[curr++] = nums[i];
                currNum = nums[i];
            }
        }
        return curr;
    }
};
