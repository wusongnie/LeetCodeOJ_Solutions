class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        int len = k % nums.size();
        nums.insert(nums.begin(), nums.end() - len, nums.end());
        nums.resize(size);
    }
};
