class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int l = 0;
        int r = height.size() - 1;
        ans = area(l,r,height);
        while(l < r){
            if(height[l] < height[r]){
                l++;
                ans = max(ans, area(l,r,height));
            }else{
                r--;
                ans = max(ans, area(l,r,height));
            }
            
        }
        return ans;
    }
    
    int area(int l, int r, vector<int>& height){
        return min(height[l], height[r]) * (r - l);
    }
};
