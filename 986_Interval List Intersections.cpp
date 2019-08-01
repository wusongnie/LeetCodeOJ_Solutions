class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int a = 0;
        int b = 0;
        vector<vector<int>> res;
        vector<int> temp;
        temp.resize(2);
        while(a < A.size() && b < B.size()){
            int lo = max(A[a][0], B[b][0]);
            int hi = min(A[a][1], B[b][1]);
            if(lo <= hi){
                temp[0] = lo;
                temp[1] = hi;
                res.push_back(temp);
            }
            if(B[b][1] <= A[a][1]){
                b++;
            }else{
                a++;
            }
        }
        return res;
    }
};
