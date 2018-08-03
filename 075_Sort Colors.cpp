class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = -1;
        int one = -1;
        int two = -1;
        for (int i : nums){
            switch(i){
                case 0:
                    nums[++two] = 2;
                    nums[++one] = 1;
                    nums[++zero] = 0;
                    break;
                case 1:
                    nums[++two] = 2;
                    nums[++one] = 1;
                    break;
                case 2:
                    nums[++two] = 2;
                    break;
            }
        }
    }
};
