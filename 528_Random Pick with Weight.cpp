class Solution {
public:
    vector<int> sums;
    Solution(vector<int> w) {

        for(int i = 1; i < w.size(); ++i){
            w[i] = w[i - 1] + w[i];
        }
        sums = w;
    }
    
    int pickIndex() {
        int target = rand() % (sums[sums.size() - 1]) + 1;
        int left = 0, right = sums.size() - 1;
        // search position 
        while(left < right){
            int mid = left + (right - left)/2;
            if(sums[mid] == target)
                return mid;
            else if(sums[mid] < target)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(w);
 * int param_1 = obj.pickIndex();
 */
