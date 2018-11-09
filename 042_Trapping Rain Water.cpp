class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0;
        int i = 0;
        int j = height.size() - 1;
        int leftMax = 0;
        int rightMax = 0;
        while(i < j){
            leftMax = max(leftMax, height[i]);
            rightMax = max(rightMax, height[j]);
            if(leftMax > rightMax){
                res += rightMax - height[j];
                j--;
            }else{
                res += leftMax - height[i];
                i++;
            }
        }
        return res;
    }
};
