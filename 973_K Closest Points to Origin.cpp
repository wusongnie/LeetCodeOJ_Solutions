class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        typedef struct {
            bool operator()(const vector<int>& a, const vector<int>& b){
                return (a[0]*a[0] + a[1]*a[1]) < (b[0]*b[0] + b[1]*b[1]);
            }
        }comp;
        sort(points.begin(), points.end(),comp());
        vector<vector<int>> res;
        for(int i = 0; i < K; ++i){
            res.push_back(points[i]);
        }
        return res;
    }
};
