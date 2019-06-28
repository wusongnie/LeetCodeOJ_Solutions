class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int r = 0;
        while(r < A.size() && A[r] < 0){
            r++;
        }
        int l = r - 1;
        vector<int> res;
        while(l >= 0 && r < A.size()){
            if(A[l] * A[l] < A[r] * A[r]){
                res.push_back(A[l] * A[l]);
                l--;
            }else{
                res.push_back(A[r] * A[r]);
                r++;
            }
        }
        while(l >= 0){
            res.push_back(A[l] * A[l]);
            l--;
        }
        
        while(r < A.size()){
            res.push_back(A[r] * A[r]);
            r++;
        }
        
        return res;
    }
};
