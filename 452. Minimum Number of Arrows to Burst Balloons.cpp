class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        typedef struct {
            bool operator()(const vector<int>& b1, const vector<int>& b2){
                return b1[1] < b2[1];
            }
        }comp;
        if(points.size() <= 1)
            return points.size();
        sort(points.begin(), points.end(), comp());
        int res = 1;
        int firstend = points[0][1];
        for(auto b : points){
            int xstart = b[0];
            int xend = b[1];
            if(xstart > firstend){
                res++;
                firstend = xend;
            }
                
        }
        return res;
    }
};
